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
  int n, k; cin >> n >> k;
  vector<vector<int>> t(n, vector<int>(k));

  rep(i, n) rep(j, k) cin >> t[i][j];

  auto dfs = [&](auto&& dfs, int i, int sum) -> bool {
    if (i == n) return sum == 0;

    rep(j, k) {
      if (dfs(dfs, i+1, sum ^ t[i][j])) return true;
    }

    return false;
  };

  rep(i, k) {
    int res = dfs(dfs, 1, t[0][i]);

    if (res) {
      out("Found");
      return 0;
    }
  }

  out("Nothing");

  return 0;
}
