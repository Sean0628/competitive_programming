#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double a, b; cin >> a >> b;
  double c = (a-b)/3 + b;

  cout << fixed << setprecision(5);
  cout << c << endl;

  return 0;
}
