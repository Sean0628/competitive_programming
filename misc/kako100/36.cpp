#include <vector>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, w; cin >> n >> w;
  vector<int> V(n), W(n);
  rep(i, n) cin >> V[i] >> W[i];
  vector<int> dp(w+1, 0);

  rep(i, n) {
    for (int j = 0; j <= w - W[i]; ++j) {
      dp[j + W[i]] = max(dp[j + W[i]], dp[j] + V[i]);
    }
  }

  cout << dp[w] << endl;

  return 0;
}
