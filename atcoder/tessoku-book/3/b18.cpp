#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, s; cin >> n >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<bool>> dp(n+1, vector<bool>(s+1, false));
  dp[0][0] = true;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= s; j++) {
      if (j < a[i-1]) {
        if (dp[i-1][j]) dp[i][j] = true;
      } else {
        if (dp[i-1][j] || dp[i-1][j-a[i-1]]) dp[i][j] = true;
      }
    }
  }

  vector<int> ans;

  int i = n, j = s;
  while (i > 0) {
    if (j >= a[i-1] && dp[i-1][j-a[i-1]]) {
      ans.push_back(i);
      j -= a[i-1];
    }

    i--;
  }

  if (ans.size() == 0) {
    out(-1);
    return 0;
  }

  reverse(ans.begin(), ans.end());
  out(ans.size());
  for (auto x : ans) cout << x << " ";
  return 0;
}
