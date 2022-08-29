#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d; cin >> n >> d;
  vector<double> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  int cnt = 0;
  rep(i, n) {
    double dist = sqrt(x[i]*x[i] + y[i]*y[i]);
    if (d >= dist) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
