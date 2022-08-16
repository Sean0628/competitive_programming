#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;
  double ans = (gx-sx)*sy/(sy+gy)+sx;
  printf("%.6f\n", ans);
  return 0;
}
