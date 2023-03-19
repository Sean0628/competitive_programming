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

  int d = 0;
  rep(i, n+1) {
    if (i == 0) d += abs(0-a[i]);
    else if (i == n) d += abs(a[i-1]-0);
    else d += abs(a[i-1]-a[i]);
  }

  rep(i, n) {
    int ans = d;
    if (i == 0) {
      ans -= (abs(0 - a[i]) + abs(a[i] - a[i+1]));
      ans += abs(0 - a[i+1]);
    } else if (i == n-1) {
      ans -= (abs(0 - a[i]) + abs(a[i] - a[i-1]));
      ans += abs(0 - a[i-1]);
    } else {
      ans -= (abs(a[i-1]- a[i]) + abs(a[i] - a[i+1]));
      ans += abs(a[i-1] - a[i+1]);
    }

    out(ans);
  }

  return 0;
}
