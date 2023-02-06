#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  double a, b, x; cin >> a >> b >> x;
  double s = x/a;
  double rad;

  if (s >= a*b/2) {
    double h = (a*b-s)*2/a;
    rad = atan2(h, a);
  } else {
    double w = s*2/b;
    rad = atan2(b, w);
  }

  double deg = rad/(2*M_PI)*360;

  printf("%.10f\n", deg);
  return 0;
}
