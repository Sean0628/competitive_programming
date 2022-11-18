#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n, INT_MAX), b(n, INT_MAX);

  for (int i = 1; i < n; ++i) cin >> a[i];
  for (int i = 2; i < n; ++i) cin >> b[i];

  vector<int> dp(n);

  for (int i = 1; i < n; ++i) {
    int x = INT_MAX, y = INT_MAX;
    x = dp[i-1] + a[i];
    if (i-2 >= 0) y = dp[i-2] + b[i];

    dp[i] = min(x, y);
  }

  cout << dp[n-1] << endl;
  return 0;
}
