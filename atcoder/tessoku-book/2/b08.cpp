#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vector b(1501, vector<int> (1501));
  vector sum(1501, vector<int> (1501));

  rep(i, n) {
    b[x[i]][y[i]]++;
  }

  for (int i = 1; i <= 1500; ++i) {
    for (int j = 1; j <= 1500; ++j) {
      sum[i][j] = sum[i-1][j] + b[i][j];
    }
  }
  for (int i = 1; i <= 1500; ++i) {
    for (int j = 1; j <= 1500; ++j) {
      sum[i][j] += sum[i][j-1];
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
