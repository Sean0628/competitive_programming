#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<double> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  int cnt = 0;
  rep(i, n) {
    for (int j = i; j < n; ++j) {
      if (i == j) continue;

      double t = (y[j] - y[i]) / (x[j] - x[i]);
      if (-1 <= t && t <= 1) cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
