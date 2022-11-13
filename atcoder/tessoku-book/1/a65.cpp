#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n+2), dp(n+1);
  vector<vector<int>> to(n+1);
  for (int i = 2; i <= n; ++i) {
    cin >> a[i];
    to[a[i]].emplace_back(i);
  }

  for (int i = n; i > 0; --i) {
    dp[i] = 0;
    rep(j, to[i].size()) dp[i] += (dp[to[i][j]] + 1);
  }

  for (int i = 1; i <= n; ++i) {
    cout << dp[i] << " ";
  }
  cout << endl;
  return 0;
}
