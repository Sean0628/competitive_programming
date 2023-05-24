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
  vector<int> a(n-1), b(n-1);
  rep(i, n-1) cin >> a[i];
  rep(i, n-1) cin >> b[i];

  vector<int> dp(n+1, INT_MIN);
  dp[1] = 0;

  rep(i, n-1) {
    chmax(dp[a[i]], dp[i+1] + 100);
    chmax(dp[b[i]], dp[i+1] + 150);
  }

  out(dp[n]);
  return 0;
}
