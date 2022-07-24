#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, d; cin >> a >> b >> d;
  double x, y;
  x = a * cos(M_PI * d / 180) - b * sin(M_PI * d / 180);
  y = a * sin(M_PI * d / 180) + b * cos(M_PI * d / 180);

  cout << std::fixed;
  cout << std::setprecision(7);
  cout << x << " " << y << endl;

  return 0;
}
