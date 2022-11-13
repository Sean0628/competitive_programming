#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto solve = [&](int omote, int ura) {
    ll tot = 0;
    rep(i, n) {
      ll card1 = a[i]; if (omote == 2) card1 = -a[i];
      ll card2 = b[i]; if (ura == 2) card2 = -b[i];

      if (card1 + card2 >= 0) tot += (card1 + card2);
    }

    return tot;
  };

  ll a1 = solve(1, 1);
  ll a2 = solve(1, 2);
  ll a3 = solve(2, 1);
  ll a4 = solve(2, 2);

  cout << max({a1, a2, a3, a4}) << endl;
  return 0;
}
