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
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

  int x = x2;
  int y = y2;

  int dx = x2 - x1;
  int dy = y2 - y1;

  rep(i, 2) {
    swap(dx, dy);
    dx = -dx;
    x += dx;
    y += dy;
    printf("%d %d\n", x, y);
  }
  return 0;
}
