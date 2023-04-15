
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
  vector<int> a(n), b(n), c(n);
  rep(i, n) {
    int t; cin >> t;
    a[i] = t;
    b[i] = t;
    c[i] = t;
  }

  rep(i, n) c[i] *= -1;

  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  bool ok = false;

  rep(i, n) {
    int m = x + a[i];
    if (m < 0) {
      m *= -1;
      auto t = lower_bound(c.begin(), c.end(), m);
      if (t != c.end() && *t == m) {
        ok = true;
        break;
      }
    } else {
      auto t = lower_bound(b.begin(), b.end(), m);
      if (t != b.end() && *t == m) {
        ok = true;
        break;
      }
    }
  }

  cyn(ok);
  return 0;
}

