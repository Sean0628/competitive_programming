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

vector<ll> eratosthenes(ll n) {
  vector<ll> primes;
  vector<bool> is_prime(n + 1, true);

  is_prime[0] = is_prime[1] = false;

  for (ll i = 2; i <= n; ++i) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (ll j = 2 * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }

  return primes;
}

int main() {
  ll n; cin >> n;

  vector<ll> p = eratosthenes(3*1e5);

  int cnt = 0;

  int sz = p.size();

  rep(i, sz) {
    int k = sz - 1;

    for(int j = i+1; j < k && j < sz; j++) {
      while (j < k) {
        ll v = p[i] * p[i] * p[j];
        if (v > n) { k--; continue; }

        v *= p[k];
        if (v > n) { k--; continue; }

        v *= p[k];
        if (v > n) { k--; continue; }

        break;
      }

      cnt += (k - j);
    }
  }


  out(cnt);
  return 0;
}
