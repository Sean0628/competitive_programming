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
  int n, t; cin >> n >> t;
  int ans = INT_MAX;
  rep(i, n) {
    int c, T; cin >> c >> T;

    if (T <= t) {
      ans = min(c, ans);
    }
  }

  if (ans == INT_MAX) {
    out("TLE");
    return 0;
  }
  out(ans);
  return 0;
}
