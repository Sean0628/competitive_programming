#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c, n; cin >> n >> a >> b >> c;
  ll cnt = LONG_MAX;

  rep(i, 10'000) {
    rep(j, 10'000-i) {
      ll r = n - i*a - j*b;
      if (r % c != 0 || r < 0) continue;

      ll dc = (i + j) + (r / c);
      if (dc < 9999) cnt = min(cnt, dc);
    }
  }

  cout << cnt << endl;
  return 0;
}
