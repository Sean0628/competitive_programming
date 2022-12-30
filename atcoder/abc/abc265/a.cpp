#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y, n; cin >> x >> y >> n;

  int yu = y/3;

  int tot = 0;
  while (n > 0) {
    if (n >= 3 && yu < x) {
      tot += y;
      n -= 3;
    } else {
      tot += x;
      n -= 1;
    }
  }

  cout << tot << endl;
  return 0;
}
