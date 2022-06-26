#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, a, d, n; cin >> x >> a >> d >> n;
  if (d == 0) {
    cout << abs(a-x) << endl;
    return 0;
  }

  if (d < 0) {
    a = a + d * (n - 1);
    d = -d;
  }

  ll i = (x-a)/d;
  auto f = [&](ll i) {
    if (i < 0) i =0;
    if (i >= n) i = n - 1;
    return a + d * i;
  };
  ll ans = abs(f(i)-x);
  ans = min(ans, abs(f(i+1)-x));
  cout << ans << endl;

  return 0;
}
