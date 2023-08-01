#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--, b--;

    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<bool> visited(n, false);

  auto dfs = [&](auto self, int v) -> void {
    visited[v] = true;

    for (auto nv : g[v]) {
      if (visited[nv]) continue;
      self(self, nv);
    }
  };

  dfs(dfs, 0);

  bool ok = true;
  rep(i, n) if (!visited[i]) ok = false;

  if (ok) out("The graph is connected.");
  else out("The graph is not connected. ");
  return 0;
}
