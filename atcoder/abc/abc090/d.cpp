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
  ll n, k; cin >> n >> k;

  ll ans = 0;
  if (k == 0) ans = n*n;
  else {
    for (ll b = k+1; b <= n; ++b) {
      ll p = n/b;
      ll r = n%b;
      ll cnt = b - k;
      ans += cnt * p + max(r+1-k, 0LL);
    }
  }

  out(ans);
  return 0;
}
