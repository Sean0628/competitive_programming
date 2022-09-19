#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector x(h, vector<int> (w));
  rep(i, h) rep(j, w) cin >> x[i][j];
  int q; cin >> q;
  vector<int> a(q), b(q), c(q), d(q);
  rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector s(h+1, vector<int> (w+1));

  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      s[i][j] = s[i][j-1] + x[i-1][j-1];
    }
  }

  rep(i, q) {
    int ltot = 0, rtot = 0;
    for (int j = a[i]; j <= c[i]; ++j) {
      ltot += s[j][b[i]-1];
      rtot += s[j][d[i]];
    }
    cout << rtot - ltot << endl;
  }
 return 0;
}
