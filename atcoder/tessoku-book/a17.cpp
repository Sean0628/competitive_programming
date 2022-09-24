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

  vector<int> dp(n);

  dp[0] = 0;
  for (int i = 1; i < n; ++i) {
    int x = dp[i-1] + a[i-1];
    int y = (i > 1) ? dp[i-2] + b[i-2] : INT_MAX;
    dp[i] = min(x, y);
  }

  int idx = n-1;
  vector<int> ans;
  while (idx > 0) {
    ans.emplace_back(idx+1);
    int x = dp[idx-1] + a[idx-1];
    int y = (idx > 1) ? dp[idx-2] + b[idx-2] : INT_MAX;

    if (x < y) idx--;
    else idx -= 2;
  }
  ans.emplace_back(1);

  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
