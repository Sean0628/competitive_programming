#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y, z; cin >> x >> y >> z;

  int ans = 0;
  if (x > 0) {
    if (y > 0) {
      if (x > y) {
        if (z > y) {
          ans = -1;
        } else {
          if (z < 0) ans = x + abs(z)*2;
          else ans = x;
        }
      } else ans = x;
    } else {
      ans = x;
    }
  } else {
    if (y > 0) {
      ans = abs(x);
    } else {
      if (x < y) {
        if (z < y) {
          ans = -1;
        } else {
          if (z > 0) ans = abs(x) + abs(z)*2;
          else ans = abs(x);
        }
      } else ans = abs(x);
    }
  }

  cout << ans << endl;
  return 0;
}
