#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll x2 = 0;

  rep(i, n) {
    if (i%2 == 0) x2 += a[i];
    else x2 -= a[i];
  }

  vector<int> ans(n);
  ans[0] = x2/2;
  rep(i, n-1) {
    ans[i+1] = a[i] - ans[i];
  }

  rep(i, n) ans[i] *= 2;
  rep(i, n) cout << ans[i] << " ";
  return 0;
}
