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

  vector<bool> v(n+1);

  auto dfs = [&](auto f, int pos) -> void {
    v[pos] = true;

    for (int i = 0; i < to[pos].size(); i++) {
      int next = to[pos][i];
      if (!v[next]) f(f, next);
    }
    return;
  };

  dfs(dfs, 1);

  string ans = "The graph is connected.";
  for (int i = 1; i <= n; ++i) {
    if (!v[i]) ans = "The graph is not connected.";
  }

  cout << ans << endl;
  return 0;
}
