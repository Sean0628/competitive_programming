#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector <double> a(n), b(n);

  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  double ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
  rep(i, n) {
    ans1 += fabs(a[i] - b[i]);
    ans2 += pow(fabs(a[i] - b[i]), 2);
    ans3 += pow(fabs(a[i] - b[i]), 3);
    ans4 = max(ans4, fabs(a[i] - b[i]));

  }

  cout << fixed;
  cout << setprecision(6);

  cout << ans1 << endl;
  cout << sqrt(ans2) << endl;
  cout << pow(ans3, (1.0 / 3.0)) << endl;
  cout << ans4 << endl;

  return 0;
}
