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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> dp(n+1, 1e9);
  dp[0] = dp[1] = 0;

  for (int i = 1; i <= n; i++) {
    chmin(dp[i+1], dp[i] + abs(a[i-1] - a[i]));
    if (i+2 <= n) chmin(dp[i+2], dp[i] + abs(a[i-1] - a[i+1]));
  }

  vector<int> ans;
  int idx = n;

  while (idx > 1) {
    ans.push_back(idx);

    if (dp[idx-1] + abs(a[idx-2] - a[idx-1]) == dp[idx]) {
      idx--;
    } else {
      idx -= 2;
    }
  }

  ans.push_back(1);
  reverse(ans.begin(), ans.end());

  out(ans.size());
  for (auto x : ans) cout << x << " ";
  return 0;
}
