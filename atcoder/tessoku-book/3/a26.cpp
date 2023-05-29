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

vector<bool> erathosthenes(ll n) {
  vector<bool> is_prime(n + 1, true);

  is_prime[0] = is_prime[1] = false;

  for (ll i = 2; i <= n; ++i) {
    if (is_prime[i]) {
      for (ll j = 2 * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }

  return is_prime;
}

int main() {
  int q; cin >> q;
  vector<bool> is_prime = erathosthenes(300'000);

  rep(i, q) {
    int x; cin >> x;
    cyn(is_prime[x]);
  }
  return 0;
}
