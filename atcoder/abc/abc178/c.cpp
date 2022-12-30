#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll mod = pow(10, 9) +7;

ll powmod(ll x, ll y) {
  ll res=1;

  for (ll i = 0; i < y; ++i) {
    res = res*x%mod;
  }

  return res;
}

int main() {
  int n; cin >> n;

  ll ans = 0;

  ans = powmod(10, n) - powmod(9, n) - powmod(9, n) + powmod(8, n);

  ans %= mod;
  ans=(ans+mod)%mod;
  cout << ans << endl;
  return 0;
}
