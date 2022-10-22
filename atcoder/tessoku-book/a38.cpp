#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int d, n; cin >> d >> n;
  vector<int> l(n), r(n), h(n);
  rep(i, n) {
    cin >> l[i] >> r[i] >> h[i];
    l[i]--; r[i]--;
  }

  vector<int> lim(d, 24);
  rep(i, n) {
    for (int j = l[i]; j <= r[i]; ++j) lim[j] = min(lim[j], h[i]);
  }

  int ans = 0;
  rep(i, d) ans += lim[i];

  cout << ans << endl;
  return 0;
}
