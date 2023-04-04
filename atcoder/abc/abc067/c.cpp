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
  ll tot = 0;
  rep(i, n) {
    cin >> a[i];
    tot += a[i];
  }

  ll ans = INT_MAX;
  ll sum = 0;
  rep(i, n-1) {
    sum += a[i];
    chmin(ans, abs(tot - 2*sum));
  }

  out(ans);
  return 0;
}
