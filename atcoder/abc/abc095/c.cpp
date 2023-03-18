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
  int a, b, c, x, y; cin >> a >> b >> c >> x >> y;

  int m = min(x, y);
  x -= m;
  y -= m;

  int tot = 0;
  while (m > 0) {
    if (a+b > c*2) {
      tot += c*2;
    } else {
      tot += a+b;
    }
    m--;
  }

  while (x > 0) {
    if (a > c*2) {
      tot += c*2;
    } else {
      tot += a;
    }
    x--;
  }

  while (y > 0) {
    if (b > c*2) {
      tot += c*2;
    } else {
      tot += b;
    }
    y--;
  }

  out(tot);

  return 0;
}
