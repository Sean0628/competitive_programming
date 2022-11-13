#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  vector<int> dp(n);

  dp[0] = 0;
  for (int i = 1; i < n; ++i) {
    int x = (i > 1) ? dp[i-2] + abs(h[i] - h[i-2]) : INT_MAX;
    int y = dp[i-1] + abs(h[i] - h[i-1]);
    dp[i] = min(x, y);
  }

  cout << dp[n-1] << endl;
  return 0;
}
