#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  vector<vector<int>> to(n+1);
  rep(i, m) {
    cin >> a[i] >> b[i];
    to[a[i]].emplace_back(b[i]);
    to[b[i]].emplace_back(a[i]);
  }

  vector<bool> visisted(n+1);

  auto dfs = [&](auto f, int pos) -> void {
    visisted[pos] = true;

    rep(i, to[pos].size()) {
      int next = to[pos][i];
      if (!visisted[next]) f(f, next);
    }
    return;
  };

  dfs(dfs, 1);

  string ans = "The graph is connected.";
  for (int i = 1; i <= n; ++i) {
    if (!visisted[i]) ans = "The graph is not connected.";
  }
  cout << ans << endl;

  return 0;
}
