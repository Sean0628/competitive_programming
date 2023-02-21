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

void solve() {
  int n, d, k; cin >> n >> d >> k;
  k--;
  int g = gcd(n, d);
  int m = n/g, e = d/g;

  int b = (ll) k * e % m;
  int i = k/m;
  int ans = b * g + i;

  out(ans);
}

int main() {
  int t; cin >> t;
  rep(i, t) solve();
  return 0;
}
