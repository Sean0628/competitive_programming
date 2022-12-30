#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b; cin >> a >> b;
  int ta = 0, tb = 0;

  rep(i, 3) {
    ta += a%10;
    a /= 10;
    tb += b%10;
    b /= 10;
  }

  if (ta < tb) cout << tb << endl;
  else cout << ta << endl;

  return 0;
}
