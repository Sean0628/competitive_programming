#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double r, a, c;

  cin >> r;

  a = r * r * M_PI;
  c = (r + r) * M_PI;

  cout << fixed << setprecision(6) << a << " " << c << endl;

  return 0;
}
