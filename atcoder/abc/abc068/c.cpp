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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "POSSIBLE" : "IMPOSSIBLE") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);

  vector<vector<int>> g(n);
  rep(i, m) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;

    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  bool ok = false;

  auto dfs = [&](auto&& dfs, int v, int p, int c) -> void {
    if (v == n-1 && c == 2) ok = true;
    if (c == 2) return;

    for (int u : g[v]) {
      if (u == p) continue;

      dfs(dfs, u, v, c+1);
    }

    return;
  };

  dfs(dfs, 0, -1, 0);

  cyn(ok);

  return 0;
}
