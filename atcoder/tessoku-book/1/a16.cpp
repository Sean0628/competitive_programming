#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n-1) cin >> a[i];
  rep(i, n-2) cin >> b[i];

  vector<int> dp(n, 0);

  for (int i = 1; i < n; ++i) {
    int x = dp[i-1] + a[i-1];
    int y = i > 1 ? dp[i-2] + b[i-2] : INT_MAX;
    dp[i] = min(x, y);
  }

  cout << dp[n-1] << endl;

  return 0;
}
