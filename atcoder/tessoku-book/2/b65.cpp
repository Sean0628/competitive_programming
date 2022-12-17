#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, t; cin >> n >> t;
  vector<vector<int>> to(n+1);
  int a, b;
  rep(i, n-1) {
    cin >> a >> b;

    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }

  vector<bool> visited(n+1);
  vector<int> ans(n+1);

  auto dfs = [&](auto f, int pos) -> int {
    visited[pos] = true;
    ans[pos] = 0;

    rep(i, to[pos].size()) {
      int next = to[pos][i];
      if (!visited[next]) {
        int res = f(f, next);
        ans[pos] = max(ans[pos], res+1);
      }
    }

    return ans[pos];
  };

  dfs(dfs, t);

  for (int i = 1; i <= n; ++i) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
