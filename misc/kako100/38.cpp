#include <vector>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int INF = 1e9;

int main() {
  int n; cin >> n;

  while (n > 0) {
    string s, t; cin >> s >> t;
    --n;

    int m = s.size(), l = t.size();

    // Longest Common Subsequence (LCS)
    vector<vector<int>> dp(m+1, vector<int>(l+1));
    dp[0][0] = 0;

    rep(i, m) {
      rep(j, l) {
        if (s[i] == t[j]) {
          dp[i+1][j+1] = dp[i][j] + 1;
        } else {
          dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);
          dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]);
        }
      }
    }

    cout << dp[m][l] << endl;
  }

  return 0;
}
