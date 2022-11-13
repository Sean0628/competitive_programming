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

  int idx = n-1;
  vector<int> ans;
  while (idx > 0) {
    int x = (idx > 1) ? dp[idx-2] + abs(h[idx-2] - h[idx]) : INT_MAX;
    int y = dp[idx-1] + abs(h[idx-1] - h[idx]);

    ans.emplace_back(idx+1);
    if (x < y) idx -= 2;
    else idx -= 1;
  }
  ans.emplace_back(1);

  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;

  return 0;
}
