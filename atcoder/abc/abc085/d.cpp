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
  int n, h; cin >> n >> h;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  int ans = 0;

  rep(i, n) {
    if (a[0] > b[i]) continue;
    h -= b[i];
    ans++;

    if (h <= 0) {
      out(i+1);
      return 0;
    }
  }

  out(ans+(h+a[0]-1)/a[0]);
  return 0;
}
