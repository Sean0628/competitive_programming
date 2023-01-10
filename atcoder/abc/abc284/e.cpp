#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MX = 1e6;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--, b--;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }

  int ans = 0;
  vector<bool> visited(n);

  auto dfs = [&](auto dfs, int v) -> void {
    if (ans == MX) return;

    ans++;
    visited[v] = true;
    for (int u : to[v]) {
      if (visited[u]) continue;
      dfs(dfs, u);
    }
    visited[v] = false;
  };

  dfs(dfs, 0);
  cout << ans << endl;

  return 0;
}
