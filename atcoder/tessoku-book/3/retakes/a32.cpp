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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

int main() {
  int n, a, b; cin >> n >> a >> b;
  vector<bool> dp(n+1, false);

  rep(i, n+1) {
    if (i >= a && !dp[i-a]) dp[i] = true;
    if (i >= b && !dp[i-b]) dp[i] = true;
  }

  cyn(dp[n]);
  return 0;
}
