#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a, x, y; cin >> n >> a >> x >> y;

  int ans = 0;

  for (int i = 1; i <= n; ++i) {
    if (i > a) ans += y;
    else ans += x;
  }

  cout << ans << endl;

  return 0;
}
