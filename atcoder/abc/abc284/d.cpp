#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll prime_factors(ll n) {
  ll rem = n;
  for (ll i = 2; i*i <= n; i++) {
    while (rem%i == 0) {
      rem /= i;
      return i;
    }
  }

  return rem;
}

bool isPrime(ll a) {
  for (ll i = 2; i*i <= a; ++i) {
    if (a%i == 0) return false;
  }

  return true;
}

int main() {
  int t; cin >> t;

  rep(i, t) {
    ll n; cin >> n;
    ll prime = prime_factors(n);

    ll q = prime;
    double p = sqrt(n/q);
    if ((fmod(p, 1.0) == 0) && isPrime(p)) cout << (ll)p << " " << q << endl;
    else cout << prime << " " << n/(prime*prime) << endl;
  }

  return 0;
}
