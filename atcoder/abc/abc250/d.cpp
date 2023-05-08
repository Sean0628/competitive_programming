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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

vector<ll> eratosthenes(int n) {
  vector<bool> is_prime(n + 1, true);
  vector<ll> primes;
  is_prime[0] = false;
  is_prime[1] = false;

  for (int i = 2; i <= n; i++) {
    if (!is_prime[i]) continue;

    primes.push_back(i);

    for (int j = i * 2; j <= n; j += i) {
      is_prime[j] = false;
    }
  }

  return primes;
}

int main() {
  ll n; cin >> n;

  vector<ll> primes = eratosthenes(1e6);

  auto f = [](ll p, ll q) {
    double est = 1;
    est = (q*q*q);
    est *= p;
    if (est > 4e18) return LLONG_MAX;

    return (ll) p*q*q*q;
  };

  ll ans = 0;
  int sz = primes.size();
  int q = sz-1;
  rep(p, sz) {
    while (p < q && f(primes[p], primes[q]) > n) q--;

    if (p >= q) break;

    ans += (q-p);
  }

  out(ans);
  return 0;
}
