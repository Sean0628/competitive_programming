#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<ll, ll>;

P g(ll x) {
  vector<ll> num;

  while (x > 0) {
    num.emplace_back(x%10);
    x/=10;
  }

  sort(num.begin(), num.end());
  ll desc = 0;
  rep(i, num.size()) {
    desc += (num[i] * pow(10, i));
  }

  sort(num.rbegin(), num.rend());
  ll asc = 0;
  rep(i, num.size()) {
    asc += (num[i] * pow(10, i));
  }

  return make_pair(asc, desc);
}

ll f(ll x) {
  P p = g(x);

  return p.second - p.first;
}

int main() {
  ll n, k; cin >> n >> k;

  rep(i, k) {
    n = f(n);
  }

  cout << n << endl;
  return 0;
}
