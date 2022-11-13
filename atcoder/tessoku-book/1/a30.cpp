#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MOD = 1e9 + 7;

ll powmod(ll x, ll y, ll mod) {
  ll p = x, ans = 1;

  rep(i, 30) {
    int n = (1 << i);
    if ((y/n) % 2 == 1) ans = (ans*p) % mod;

    p = (p*p) % mod;
  }

  return ans;
}

ll div(ll x, ll y, ll mod) {
  return (x * powmod(y, mod-2, mod)) % mod;
}

int main() {
  ll n, r; cin >> n >> r;

  ll a = 1;
  for (int i = 1; i <= n; ++i) a = (a*i) % MOD;

  ll b = 1;
  for (int i = 1; i <= r; ++i) b = (b*i) % MOD;
  for (int i = 1; i <= n-r; ++i) b = (b*i) % MOD;

  cout << div(a, b, MOD) << endl;
  return 0;
}
