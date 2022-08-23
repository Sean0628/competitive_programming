#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;


int main() {
  ll a, b, c, d; cin >> a >> b >> c >> d;
  ll ans = LONG_MIN;

  ans = max(ans, a*c);
  ans = max(ans, a*d);
  ans = max(ans, b*c);
  ans = max(ans, b*d);

  cout << ans << endl;
  return 0;
}
