#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double h;
  cin >> h;

  double ans = sqrt(h * (12800000 + h));

  cout << fixed << setprecision(6);
  cout << ans << endl;
  return 0;
}
