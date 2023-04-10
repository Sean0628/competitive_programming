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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  rep(i, n) {
    if (a[i] > x) {
      ans += a[i] - x;
      a[i] = x;
    }
    if (i+1 < n && a[i] + a[i+1] > x) {
      ans += a[i] + a[i+1] - x;
      a[i+1] = x - a[i];
    }
  }

  out(ans);
  return 0;
}
