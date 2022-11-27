#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int d, n; cin >> d >> n;
  vector<int> lim(d+1, 24);
  rep(i, n) {
    int l, r, h; cin >> l >> r >> h;

    for (int j = l; j <= r; ++j) {
      lim[j] = min(lim[j], h);
    }
  }

  int ans = 0;
  for (int i = 1; i <= d; ++i) {
    ans += lim[i];
  }

  cout << ans << endl;
  return 0;
}
