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
  int w, h, x, y; cin >> w >> h >> x >> y;
  double ans = (double) w*h/2;
  int num = (w == x*2 && h == y*2) ? 1 : 0;
  printf("%.10f %d\n", ans, num);
  return 0;
}
