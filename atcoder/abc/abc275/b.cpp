#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

const ll MOD = 998244353;

int main() {
  ll a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
  a %= MOD;
  b %= MOD;
  c %= MOD;
  d %= MOD;
  e %= MOD;
  f %= MOD;

  int ans = ((a*b%MOD*c%MOD) - (e*d%MOD*f%MOD)+MOD)%MOD;
  cout << ans << endl;

  return 0;
}
