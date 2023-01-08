#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll M = 1e9 + 7;
unsigned long long power10[22];

void init() {
  power10[0] = 1;
  for (int i = 1; i <= 19; ++i) power10[i] = (10ULL * power10[i-1]);
}

ll modpow(ll a, ll n, ll m) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % m;
    a = a * a % m;
    n >>= 1;
  }

  return res;
}


ll div(ll a, ll b, ll m) {
  return (a * modpow(b, m-2, m)) % m;
}

ll f(ll x) {
  ll v1 = x % M;
  ll v2 = (x+1) % M;
  ll v = v1 * v2 % M;

  return div(v, 2, M);
}

int main() {
  init();

  unsigned long long l, r; cin >> l >> r;

  ll ans = 0;

  for (int i = 1; i <= 19; ++i) {
    unsigned long long vl = max(l, power10[i-1]);
    unsigned long long vr = min(r, power10[i]-1ULL);

    if (vl > vr) continue;
    ll val = (f(vr) - f(vl - 1) + M) % M;
    ans += 1LL * i * val;
    ans %= M;
  }

  cout << ans << endl;
  return 0;
}
