#include <vector>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<int> c(m); rep(i, m) cin >> c[i];
  vector<int> dp(n+1, INF);
  dp[0] = 0;

  rep(i, m) {
    for (int j = 0; j <= n - c[i]; ++j) {
      dp[j + c[i]] = min(dp[j + c[i]], dp[j] + 1);
    }
  }

  cout << dp[n] << endl;

  return 0;
}
