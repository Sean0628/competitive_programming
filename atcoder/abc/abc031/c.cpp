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

  int ans = INT_MIN;
  rep(i, n) {
    int mx = INT_MIN, mx2 = INT_MIN;
    for (int j = n-1; j >= 0; --j) {
      if (i == j) continue;

      int tmp = 0, tmp2 = 0;
      int l = min(i, j);
      for (int k = l; k <= max(i, j); ++k) {
        if ((k-l) % 2 == 0) tmp += a[k];
        else tmp2 += a[k];
      }

      if (mx2 <= tmp2) {
        mx2 = tmp2;
        mx = tmp;
      }
    }

    ans = max(ans, mx);
  }

  out(ans);
  return 0;
}
