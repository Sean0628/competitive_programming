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

  for (int i = 1; i < n; ++i) cin >> a[i];
  for (int i = 2; i < n; ++i) cin >> b[i];

  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = a[1];

  for (int i = 2; i < n; ++i) {
    dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
  }

  vector<int> ans;
  int idx = n-1;
  while (idx > 0) {
    ans.emplace_back(idx+1);
    if (idx >= 2 && dp[idx] == dp[idx-2]+b[idx]) idx -= 2;
    else idx--;
  }
  ans.emplace_back(1);

  reverse(ans.begin(), ans.end());

  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
