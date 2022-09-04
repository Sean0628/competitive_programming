#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll s = 0, t = 0;
  rep(i, m) s += a[i]*(i+1);
  rep(i, m) t += a[i];

  ll ans = s;
  rep(i, n-m) {
    ll ns = s - t + a[i+m]*m;
    ll nt = t - a[i] + a[i+m];
    s = ns; t = nt;

    ans = max(ans, s);
  }

  cout << ans << endl;
  return 0;
}
