#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll M = 1e18;

int main() {
  ll a, b; cin >> a >> b;

  auto gcd = [](auto f, ll x, ll y) {
    if (y == 0) return x;

    return f(f, y, x%y);
  };

  auto lcm = [&](ll x, ll y) {
    ll r = y/gcd(gcd, x, y);
    if (r > M/x) return -1LL;

    return x*r;
  };

  ll ans = lcm(a, b);
  if (ans == -1LL) cout << "Large" << endl;
  else cout << ans << endl;

  return 0;
}
