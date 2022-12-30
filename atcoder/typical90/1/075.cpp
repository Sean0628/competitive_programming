#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

vector<ll> prime_factors(ll n) {
  ll rem = n;
  vector<ll> p;
  for (ll i = 2; i * i <= n; i++) {
    while (rem % i == 0) {
      rem /= i;
      p.emplace_back(i);
    }
  }

  if (rem != 1LL) p.emplace_back(rem);
  return p;
}

int main() {
  ll n; cin >> n;

  int ans = 0;
  vector<ll> v = prime_factors(n);
  for (int i = 0; i <= 20; i++) {
    if ((1 << i) >= (int)v.size()) { ans = i; break; }
  }

  cout << ans << endl;
  return 0;
}
