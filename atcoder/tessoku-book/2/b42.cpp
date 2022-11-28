#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto solve = [&](bool top, bool bottom) {
    ll tot = 0;
    rep(i, n) {
      ll card1 = a[i]; if (top) card1 = -a[i];
      ll card2 = b[i]; if (bottom) card2 = -b[i];

      if (card1 + card2 >= 0) tot += (card1 + card2);
    }

    return tot;
  };

  ll ans = max({
      solve(true, true),
      solve(false, true),
      solve(false, false),
      solve(true, false)
      });

  cout << ans << endl;
  return 0;
}
