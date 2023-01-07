#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector a(h, vector<int> (w)), b(h, vector<int> (w));

  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];

  ll ans = 0;
  rep(i, h-1) {
    rep(j, w-1) {
      int d = b[i][j]-a[i][j];
      a[i][j] += d;
      a[i][j+1] += d;
      a[i+1][j] += d;
      a[i+1][j+1] += d;

      ans += abs(d);
    }
  }

  bool ok = false;
  if (a == b) ok = true;


  if (ok) {
    cout << "Yes" << endl;
    cout << ans << endl;
  } else cout << "No" << endl;

  return 0;
}
