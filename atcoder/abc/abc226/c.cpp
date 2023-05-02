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
  int n; cin >> n;
  vector<int> t(n), k(n);
  vector<vector<int>> a(n);

  rep(i, n) {
    cin >> t[i] >> k[i];
    a[i].resize(k[i]);
    rep(j, k[i]) {
      cin >> a[i][j];
      --a[i][j];
    }
  }

  ll ans = 0;

  vector<bool> used(n, false);

  auto dfs = [&](auto self, int pos) -> void {
    ans += t[pos];
    used[pos] = true;

    for (auto x : a[pos]) {
      if (used[x]) continue;
      self(self, x);
    }
  };

  dfs(dfs, n-1);

  out(ans);
  return 0;
}
