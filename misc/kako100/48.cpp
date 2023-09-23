#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void chmax(int& a, int b) { a = max(a, b); }
void chmin(int& a, int b) { a = min(a, b); }

const int INF = 1e9;

int main() {
  int n;
  while (cin >> n && n) {
    vector<int> w(n); rep(i, n) cin >> w[i];

    // dp[i][j] := 残り [i, j] の状態から始めたときの最大値
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

    for (int len = 2; len <= n; ++len) {
      for (int i = 0; i + len <= n; ++i) {
        rep2(j, 1, len) chmax(dp[i][len], dp[i][j] + dp[i+j][len-j]);

        if (abs(w[i] - w[i+len-1]) <= 1 && dp[i+1][len-2] == len-2) chmax(dp[i][len], len);
      }
    }

    out(dp[0][n]);
  }

  return 0;
}
