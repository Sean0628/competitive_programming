#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double a, b, c, x, p;

  cin >> a >> b >> c >> x;
  if (a >= x) {
    p = 1;
  } else if (b >= x){
    p = c / (b - a);
  } else {
    p = 0;
  }

  cout << fixed << setprecision(12);
  cout << p << endl;
  return 0;
}

