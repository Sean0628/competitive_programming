#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define chmin(x, y) x = min(x, y)

const int INF = 1e9;

int main() {
  int n; cin >> n;
  vector<int> r(n), c(n); rep(i, n) cin >> r[i] >> c[i];

  // Matrix-chain multiplication
  // dp[i][j] := i 番目から j 番目までの行列の積の最小コスト
  vector<vector<int>> dp(n, vector<int>(n, INF));
  rep(i, n) dp[i][i] = 0;

  for (int len = 1; len < n; ++len) {
    for (int i = 0; i + len < n; ++i) {
      int j = i + len;
      for (int k = i; k < j; ++k) {
        chmin(dp[i][j], dp[i][k] + dp[k+1][j] + r[i] * c[k] * c[j]);
      }
    }
  }

  cout << dp[0][n-1] << endl;

  return 0;
}
