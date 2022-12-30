#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  vector<double> x(n), y(n);

  rep(i, n) cin >> x[i] >> y[i];

  double m = 0, xd, yd, td;
  rep(i, n) rep(j, n) {
    if (i == j) continue;

    xd = abs(x[i] - x[j]);
    yd = abs(y[i] - y[j]);
    td = sqrt(xd*xd + yd*yd);
    m = max(m, td);
  }

  cout << fixed << setprecision(6);
  cout << m << endl;

  return 0;
}
