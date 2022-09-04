#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  set<ll> s;
  for (ll a = 2; a*a <= n; ++a) {
    ll x = a*a;
    while (x <= n) {
      s.insert(x);
      x *= a;
    }
  }

  cout << n-s.size() << endl;
  return 0;
}
