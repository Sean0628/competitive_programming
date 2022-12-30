#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(k);
  rep(i, k) {
    cin >> a[i];
    a[i]--;
  }

  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vector<double> r(n);
  rep(i, n) {
    r[i] = 1e18;
    rep(j, k) {
      double dx = x[i] - x[a[j]];
      double dy = y[i] - y[a[j]];
      double dist = sqrt(dx*dx + dy*dy);
      r[i] = min(r[i], dist);
    }
  }

  double ans = 0;
  rep(i, n) ans = max(ans, r[i]);

  cout << fixed << setprecision(6);
  cout << ans << endl;

  return 0;
}
