#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(k);
  rep(i, k) cin >> a[i];

  vector<bool> dp(n+1);

  rep(i, n+1) {
    rep(j, k) {
      if (i >= a[j] && !dp[i-a[j]]) dp[i] = true;
    }
  }

  string ans = "First";
  if (!dp[n]) ans = "Second";

  cout << ans << endl;

  return 0;
}

