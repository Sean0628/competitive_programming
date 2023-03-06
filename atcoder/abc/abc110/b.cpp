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
void cyn(bool x) { cout << (x ? "No War" : "War") << endl; }

int main() {
  int n, m, x, y; cin >> n >> m >> x >> y;
  vector<int> X(n), Y(m);
  rep(i, n) cin >> X[i];
  rep(i, m) cin >> Y[i];

  bool ok = false;
  rep(z, 101) {
    bool f = true;
    if (x >= z || z > y) {
      f = false;
    }
    rep(i, n) {
      if (X[i] >= z) {
        f = false;
        break;
      }
    }
    rep(i, m) {
      if (Y[i] < z) {
        f = false;
        break;
      }
    }

    if (f) {
      ok = true;
      break;
    }
  }
  cyn(ok);
  return 0;
}
