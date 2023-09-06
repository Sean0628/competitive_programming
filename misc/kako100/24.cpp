#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> s(n, -1), f(n, -1);
  vector<vector<int>> to(n);
  rep(i, n) {
    int v, m; cin >> v >> m;
    v--;
    rep(j, m) {
      int u; cin >> u;
      u--;
      to[v].push_back(u);
    }
  }

  int cnt = 0;
  auto dfs = [&](auto self, int v) -> void {
    s[v] = ++cnt;
    for (int u : to[v]) {
      if (s[u] != -1) continue;
      self(self, u);
    }
    f[v] = ++cnt;
  };

  rep(i, n) if (s[i] == -1) dfs(dfs, i);

  rep(i, n) printf("%d %d %d\n", i+1, s[i], f[i]);
  return 0;
}
