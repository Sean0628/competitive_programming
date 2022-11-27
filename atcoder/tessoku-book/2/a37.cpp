#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m, b; cin >> n >> m >> b;
  vector<ll> a(n), c(m);
  rep(i, n) cin >> a[i];
  ll csum = 0;
  rep(i, m) {
    cin >> c[i];
    csum += c[i];
  }

  ll ans = 0;
  rep(i, n) ans += (a[i]*m + csum);

  ans += n*m*b;
  cout << ans << endl;
  return 0;
}
