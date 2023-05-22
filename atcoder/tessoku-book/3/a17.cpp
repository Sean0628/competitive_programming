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
  vector<int> a(n, 1e9), b(n, 1e9);
  for (int i = 1; i < n; ++i) cin >> a[i];
  for (int i = 2; i < n; ++i) cin >> b[i];

  vector<int> dp(n+1, 1e9);
  dp[0] = 0;
  for (int i = 1; i <= n; ++i) {
    chmin(dp[i], dp[i-1]+a[i]);
    if (i > 1) chmin(dp[i], dp[i-2]+b[i]);
  }

  int idx = n-1;
  vector<int> ans;

  while (idx >= 0) {
    ans.push_back(idx + 1);

    if (idx == 0) break;

    if (dp[idx-1] + a[idx] == dp[idx]) {
      idx--;
    } else {
      idx -= 2;
    }
  }

  reverse(ans.begin(), ans.end());

  out(ans.size());
  for (auto x : ans) cout << x << " ";
  return 0;
}
