#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double x, y;
  cin >> x >> y;
  double d = sqrt(pow(x, 2) + pow(y, 2));
  cout << x/d << ' ' << y/d << endl;

  return 0;
}
