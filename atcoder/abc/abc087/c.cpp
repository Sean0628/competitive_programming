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
  vector a(2, vector<int> (n));
  rep(i, 2) rep(j, n) cin >> a[i][j];

  int tot = a[0][0];
  rep(i, n) tot += a[1][i];

  int ans = tot;

  for (int i = 1; i < n; ++i) {
    int tmp = tot;
    rep(j, i) {
      tmp -= a[1][j];
    }

    for (int k = 1; k <= i; ++k) tmp += a[0][k];
    ans = max(tmp, ans);
  }

  out(ans);
  return 0;
}
