#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double a, b, h, m; cin >> a >> b >> h >> m;

  double th = (h*60+m)/720 * 2*M_PI;
  double tm = m/60 * 2*M_PI;
  double xh = a*cos(th), yh = a*sin(th);
  double xm = b*cos(tm), ym = b*sin(tm);
  double dx = xh-xm, dy = yh-ym;
  double ans = sqrt(dx*dx + dy*dy);
  printf("%.10f\n", ans);

  return 0;
}
