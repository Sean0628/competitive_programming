#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double t, l, x, y, e;
  cin >> t >> l >> x >> y;
  int q; cin >> q;

  auto f = [&](double i) {
    double cx = 0;
    double cy = -(l/2.0) * sin(i/t*2.0*M_PI);
    double cz = (l/2.0) - (l/2.0) * cos(i/t*2.0*M_PI);
    double d1 = sqrt((cx-x)*(cx-x) + (cy-y)*(cy-y));
    double d2 = cz;

    double ans = atan2(d2, d1) * 180.0L / M_PI;

    return ans;
  };

  rep(i, q) {
    double e; cin >> e;
    printf("%.12f\n", f(e));
  }
  return 0;
}
