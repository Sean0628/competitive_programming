#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define chmin(x, y) x = min(x, y)

const int INF = 1e9;

int main() {
  int n, m;
  // Differential Pulse Code Modulation
  while (cin >> n >> m && n && m) {
    vector<int> c(m); rep(i, m) cin >> c[i];
    vector<int> x(n); rep(i, n) cin >> x[i];

    // dp[i][j] := i 番目までの音声データを符号化したときの最小の誤差
    vector<vector<int>> dp(n+1, vector<int>(256, INF));
    dp[0][128] = 0;

    rep(i, n) rep(j, 256) {
      if (dp[i][j] == INF) continue;

      rep(k, m) {
        int nj = j + c[k];
        if (nj < 0) nj = 0;
        if (nj > 255) nj = 255;

        chmin(dp[i+1][nj], dp[i][j] + ((x[i] - nj) * (x[i] - nj)));
      }
    }
    int res = INF;
    rep(j, 256) chmin(res, dp[n][j]);
    cout << res << endl;
  }

  return 0;
}
