#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;

  vector dp(31, vector<int> (n+1));
  for (int i = 1; i <= n; ++i) {
    string s = to_string(i);
    dp[0][i] = i;

    for (int j = 0; j < s.size(); ++j) {
      dp[0][i] -= (int) (s[j] - '0');
    }
  }

  rep(d, 30) {
    if (d == 0) continue;
    for (int i = 1; i <= n; ++i) dp[d][i] = dp[d-1][dp[d-1][i]];
  }

  for (int i = 1; i <= n; ++i) {
    int now = i;

    for (int d = 29; d >= 0; --d) {
      if ((k / (1<<d)) % 2 != 0) now = dp[d][now];
    }

    cout << now << endl;
  }

  return 0;
}
