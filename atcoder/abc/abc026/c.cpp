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
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n-1);
  vector<vector<int>> g(n);
  rep(i, n-1) {
    cin >> a[i];
    a[i]--;
    g[a[i]].push_back(i+1);
  }

  vector<int> s(n);

  auto dfs = [&](auto dfs, int v) -> int {
    if (g[v].size() == 0) return 1;

    int mx = 0, mn = 1e9;
    for (auto nv : g[v]) {
      int m = dfs(dfs, nv);
      mx = max(mx, m);
      mn = min(mn, m);
    }

    if (mx == mn) return mx*2 + 1;
    else return mx + mn + 1;
  };

  out(dfs(dfs, 0));

  return 0;
}
