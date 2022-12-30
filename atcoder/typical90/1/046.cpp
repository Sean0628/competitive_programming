#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];

  vector<ll> am(46), bm(46), cm(46);
  rep(i, n) {
    am[a[i]%46]++;
    bm[b[i]%46]++;
    cm[c[i]%46]++;
  }

  ll ans = 0;

  rep(i, 46) rep(j, 46) rep(k, 46) {
    if ((i+j+k)%46 == 0) ans += am[i]*bm[j]*cm[k];
  }

  cout << ans << endl;

  return 0;
}
