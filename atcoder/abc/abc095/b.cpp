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
  int n, x; cin >> n >> x;
  vector<int> m(n);
  rep(i, n) cin >> m[i];
  int mn = INT_MAX;
  rep(i, n) {
    x -= m[i];
    mn = min(m[i], mn);
  }
  int ans = n;

  ans += (x/mn);

  out(ans);
  return 0;
}
