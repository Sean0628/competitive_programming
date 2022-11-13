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
  rep(i, h) rep(j, w) {
    cin >> x[i][j];
  }

  vector sum(h+1, vector<int> (w+1));
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      sum[i][j] = sum[i][j-1] + x[i-1][j-1];
    }
  }
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      sum[i][j] += sum[i-1][j];
    }
  }

  int q; cin >> q;
  rep(i, q) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = sum[c][d] + sum[a-1][b-1] - (sum[a-1][d] + sum[c][b-1]);
    cout << ans << endl;
  }

  return 0;
}
