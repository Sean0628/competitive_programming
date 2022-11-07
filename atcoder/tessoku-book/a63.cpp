#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n+1);

  rep(i, m) {
    int a, b; cin >> a >> b;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }

  vector<int> dist(n+1, -1);
  queue<int> que;

  que.push(1);
  dist[1] = 0;

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

  for (int i = 1; i <= n; ++i) cout << dist[i] << endl;
  return 0;
}
