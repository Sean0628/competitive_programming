#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;
  sy--; sx--; gy--; gx--;

  string s = "";
  rep(i, h) {
    string tmp; cin >> tmp;
    s += tmp;
  }

  vector<vector<int>> to(s.size()+1);
  rep(i, s.size()) {
    if (s[i] == '#') continue;

    if (i-1 > 0 && s[i-1] == '.') to[i].emplace_back(i-1);
    if (i+1 < s.size() && s[i+1] == '.') to[i].emplace_back(i+1);

    if (i-w > 0 && s[i-w] == '.') to[i].emplace_back(i-w);
    if (i+w < s.size() && s[i+w] == '.') to[i].emplace_back(i+w);
  }

  vector<int> dist(s.size()+1, -1);
  queue<int> que;

  int idxs = sy*w+sx;
  int idxg = gy*w+gx;

  que.push(idxs);
  dist[idxs] = 0;

  // bfs
  while (!que.empty()) {
    int pos = que.front(); que.pop();

    rep(i, to[pos].size()) {
      int next = to[pos][i];

      if (dist[next] == -1) {
        dist[next] = dist[pos] + 1;
        que.push(next);
      }
    }
  }

  cout << dist[idxg] << endl;
  return 0;
}
