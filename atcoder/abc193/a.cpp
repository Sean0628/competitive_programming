#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double a, b; cin >> a >> b;
  cout << fixed << setprecision(2);
  cout << 100 - (b/a * 100) << endl;

  return 0;
}
