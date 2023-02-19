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
  ll k; cin >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll s = 0;
  int j = 0;
  ll ans = 0;
  rep(i, n) {
    while (j < n && s+a[j] < k) {
      s += a[j];
      j++;
    }

    ans += j-i;
    s -= a[i];
  }

  ans = (ll)n*(n+1)/2 - ans;
  out(ans);
  return 0;
}
