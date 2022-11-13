#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int r, c; cin >> r >> c;
  int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;
  sy--; sx--; gy--; gx--;

  string s = "";
  rep(i, r) {
    string a; cin >> a;
    s += a;
  }

  vector<vector<int>> to(s.size()+1);
  rep(i, s.size()) {
    if (s[i] == '#') continue;

    if (i-1 > 0 && s[i-1] == '.') to[i].emplace_back(i-1);
    if (i+1 < s.size() && s[i+1] == '.') to[i].emplace_back(i+1);

    if (i-c > 0 && s[i-c] == '.') to[i].emplace_back(i-c);
    if (i+c < s.size() && s[i+c] == '.') to[i].emplace_back(i+c);
  }

  vector<int> dist(s.size()+1, -1);
  queue<int> que;

  int idxs = sy*c+sx;
  int idxg = gy*c+gx;

  que.push(idxs);
  dist[idxs] = 0;

  // bfs
  while (!que.empty()) {
    int pos = que.front(); que.pop();

    rep(i, to[pos].size()) {
      int t = to[pos][i];

      if (dist[t] == -1) {
        dist[t] = dist[pos] + 1;
        que.push(t);
      }
    }
  }

  cout << dist[idxg] << endl;
  return 0;
}
