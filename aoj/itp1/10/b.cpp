#include <bits/stdc++.h>

using namespace std;

int main() {
  double a, b, d, S;
  cin >> a >> b >> d;

  S = 0.5 * a * b * sin(M_PI * (d / 180));
  double c = sqrt(a * a + b * b - 2 * a * b * cos(M_PI * d / 180));
  double l = a + b + c;
  double h = 2 * S / a;

  cout << std::fixed;
  cout << std::setprecision(8);

  cout << S << endl;
  cout << l << endl;
  cout << h << endl;
  return 0;
}
