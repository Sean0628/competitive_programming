#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
long double t, l, x, y;

long double query(long double i) {
  long double cx = 0;
  long double cy = -(l/2.0) * sin(i/t*2.0*M_PI);
  long double cz = (l/2.0) - (l/2.0) * cos(i/t*2.0*M_PI);
  long double d1 = sqrt((cx-x) * (cx - x) + (cy - y) * (cy - y));
  long double d2 = cz;
  long double ans = atan2(d2, d1) * 180.0L / M_PI;

  return ans;
}

int main() {
  cin >> t >> l >> x >> y;
  int q; cin >> q;
  rep(i, q) {
    long double e; cin >> e;
    printf("%.12Lf\n", query(e));
  }

  return 0;
}
