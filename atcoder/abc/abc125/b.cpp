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
  vector<int> v(n), c(n);

  rep(i, n) cin >> v[i];
  rep(i, n) cin >> c[i];

  int ans = 0;
  rep(i, 1<<n) {
    int x = 0, y = 0;
    rep(j, n) {
      if (i>>j&1) {
        x += v[j];
        y += c[j];
      }
      ans = max(x-y, ans);
    }
  }

  out(ans);

  return 0;
}
