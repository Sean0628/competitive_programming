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
  vector c(3, vector<int> (3));
  rep(i, 3) rep(j, 3) cin >> c[i][j];

  vector<int> a(3), b(3);

  a[0] = 0;

  rep(j, 3) b[j] = c[0][j]-a[0];
  rep(i, 3) a[i] = c[i][0]-b[0];

  bool ok = true;

  rep(i, 3) {
    rep(j, 3) {
      if (a[i]+b[j] != c[i][j]) ok = false;
    }
  }

  cyn(ok);
  return 0;
}
