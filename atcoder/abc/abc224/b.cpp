#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll> (w));

  rep(i, h) rep(j, w) cin >> a[i][j];

  bool ok = true;
  rep(i1, h) {
    for (int i2 = i1+1; i2 < h; ++i2) {
      rep(j1, w) {
        for (int j2 = j1+1; j2 < w; ++j2) {
          if (a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]) ok = false;
        }
      }
    }
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
