#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int MOD = 2019;

int main() {
  ll l, r; cin >> l >> r;
  r = min(l+MOD*2, r);

  int ans = 2018;
  for (ll i = l; i <= r; ++i) {
    for (ll j = i+1; j <= r; ++j) {
      int x = i%MOD*j%MOD;
      ans = min(ans, x);
    }
  }

  out(ans);
  return 0;
}
