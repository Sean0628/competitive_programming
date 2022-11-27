#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;

  vector<ll> pow10(18);
  pow10[0] = 1;
  for (int i = 1; i <= 16; ++i) pow10[i] = 10LL * pow10[i-1];

  vector r(18, vector<ll> (10));
  rep(i, 15) {
    ll digit = (n/pow10[i]) % 10LL;

    rep(j, 10) {
      if (j < digit) r[i][j] = (n/pow10[i+1])*pow10[i] + pow10[i];
      if (j == digit) r[i][j] = (n/pow10[i+1])*pow10[i] + (n%pow10[i]) + 1LL;
      if (j > digit) r[i][j] = (n/pow10[i+1])*pow10[i];
    }
  }

  ll ans = 0;
  rep(i, 16) rep(j, 10) ans += 1LL * j * r[i][j];

  cout << ans << endl;

  return 0;
}
