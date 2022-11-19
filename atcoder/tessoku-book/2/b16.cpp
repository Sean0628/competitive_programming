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
  dp[1] = abs(h[0]-h[1]);

  for (int i = 2; i < n; ++i) {
    int x = dp[i-2] + abs(h[i-2] - h[i]);
    int y = dp[i-1] + abs(h[i-1] - h[i]);

    dp[i] = min(x, y);
  }

  cout << dp[n-1] << endl;
  return 0;
}
