#include <vector>
#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<int> dp(n+1, 0);
  dp[0] = dp[1] = 1;

  for (int i = 2; i <= n; ++i) {
    dp[i] = dp[i-1] + dp[i-2];
  }

  cout << dp[n] << endl;
  return 0;
}
