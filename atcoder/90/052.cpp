#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll mod = 1e9+7;

int main() {
  ll n; cin >> n;
  vector a(n, vector<ll> (6));
  rep(i, n) rep(j, 6) cin >> a[i][j];

  ll ans = 1;
  rep(i, n) {
    ans *= (a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4] + a[i][5]);
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}
