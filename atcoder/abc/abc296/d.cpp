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
  ll n, m; cin >> n >> m;

  ll ans = 1e18;

  for (ll a = 1; a*a-a < m; a++) {
    ll b = (m+a-1) / a;
    if (a <= n && b <= n) {
      chmin(ans, a*b);
    }
  }

  if (ans == 1e18) {
    out(-1);
  } else {
    out(ans);
  }

  return 0;
}
