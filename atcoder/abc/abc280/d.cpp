#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

vector<pair<ll, ll>> prime_factorize(ll n) {
  vector<pair<ll, ll>> res;

  for (ll p = 2; p*p <= n; ++p) {
    if (n % p != 0) continue;

    ll e = 0;
    while (n % p == 0) { n /= p, ++e; }
    res.emplace_back(p, e);
  }

  if (n != 1) res.emplace_back(n, 1);
  return res;
}

ll Legendre(ll n, ll p) {
  ll res = 0;
  while (n) {
    res += n / p;
    n /= p;
  }
  return res;
}

int main() {
  ll k; cin >> k;

  vector<pair<ll, ll>> pf = prime_factorize(k);

  ll low = 0, high = k;
  while (high - low > 1) {
    ll n = (low + high) / 2;

    bool ok = true;
    for (auto [p, e] : pf) {
      if (Legendre(n, p) < e) ok = false;
    }

    if (ok) high = n;
    else low = n;
  }

  cout << high << endl;
  return 0;
}
