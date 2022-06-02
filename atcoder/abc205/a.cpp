#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double a, b; cin >> a >> b;

  double x = a*b/100;

  cout << fixed << setprecision(6);
  cout << x << endl;

  return 0;
}
