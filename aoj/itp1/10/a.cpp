#include <bits/stdc++.h>

using namespace std;

int main() {
  double x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  cout << std::fixed;
  cout << std::setprecision(8);
  cout << r << endl;

  return 0;
}
