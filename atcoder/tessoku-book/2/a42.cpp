#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto f = [&](int x, int y) {
    int cnt = 0;
    rep(i, n) {
      if (x <= a[i] && a[i] <= x+k && y <= b[i] && b[i] <= y+k) cnt++;
    }

    return cnt;
  };

  int ans = 0;
  for (int i = 1; i <= 100; ++i) {
    for (int j = 1; j <= 100; ++j) {
      int s = f(i, j);
      ans = max(ans, s);
    }
  }

  cout << ans << endl;
  return 0;
}
