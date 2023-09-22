#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define chmin(x, y) x = min(x, y)

const int INF = 1e9;

int main() {
  int limit = 1e6*6;
  vector<int> v, vOdd;
  int n = 1;
  while (n*(n+1)*(n+2) <= limit) {
    int tmp = n*(n+1)*(n+2)/6;
    v.push_back(tmp);
    if (tmp%2 == 1) vOdd.push_back(tmp);
    n++;
  }

  int x;
  int m = v.size();
  int m2 = vOdd.size();
  while (cin >> x && x != 0) {
    vector<int> dp(x+1, INF);
    vector<int> dp2(x+1, INF);
    dp[0] = dp2[0] = 0;

    rep(i, m) {
      for (int j = 0; j <= x - v[i]; ++j) {
        dp[j + v[i]] = min(dp[j + v[i]], dp[j] + 1);
      }
    }
    rep(i, m2) {
      for (int j = 0; j <= x - vOdd[i]; ++j) {
        dp2[j + vOdd[i]] = min(dp2[j + vOdd[i]], dp2[j] + 1);
      }
    }
    cout << dp[x] << " " << dp2[x] << endl;
  }

  return 0;
}
