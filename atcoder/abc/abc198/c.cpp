#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<double, double>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  double r, x, y; cin >> r >> x >> y;
  double dist = sqrt(x * x + y * y);

  int ans = 0;

  if (dist < r) ans = 2;
  else if (dist == r) ans = 1;
  else if (dist <= 2*r) ans = 2;
  else ans = ceil(dist / r);

  out(ans);
  return 0;
}

