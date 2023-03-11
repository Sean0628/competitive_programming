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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, k; cin >> n >> k;
  vector<int> x(n);
  rep(i, n) cin >> x[i];

  int ans = INT_MAX;

  rep(i, n-k+1) ans = min(ans, abs(x[i]-x[i+k-1]) + abs(x[i]));
  rep(i, n-k+1) ans = min(ans, abs(x[i]-x[i+k-1]) + abs(x[i+k-1]));

  out(ans);
  return 0;
}
