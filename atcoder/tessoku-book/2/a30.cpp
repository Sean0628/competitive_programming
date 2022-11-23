#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll MOD = 1e9 + 7;

ll power(ll a, ll b) {
  ll p = a, ans = 1;

  rep(i, 60) {
    if (b&(1LL<<i)) ans = ans * p % MOD;
    p = p*p%MOD;
  }

  return ans;
}

ll comb(ll n, ll r) {
  ll a = 1, b = 1;
  for (ll i = n; i > 0; --i) a = a * i % MOD;

  for (ll i = r; i > 0; --i) b = b * i % MOD;
  for (ll i = n-r; i > 0; --i) b = b * i % MOD;

  return a*power(b, MOD-2)%MOD;
}

int main() {
  ll n, r; cin >> n >> r;
  cout << comb(n, r) << endl;
  return 0;
}
