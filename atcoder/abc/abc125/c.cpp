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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> l(n), r(n);
  rep(i, n-1) l[i+1] = gcd(l[i], a[i]);

  for (int i = n-1; i >= 1; --i) r[i-1] = gcd(r[i], a[i]);

  int ans = 1;
  rep(i, n) ans = max(ans, gcd(l[i], r[i]));
  out(ans);

  return 0;
}
