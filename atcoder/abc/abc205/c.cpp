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
  int a, b, c; cin >> a >> b >> c;

  if (a > 0 && b > 0) {
    if (a > b) out(">"); else if (a < b) out("<"); else out("=");
  } else if (a < 0 && b < 0) {
    if (a > b) out(">"); else if (a < b) out("<"); else out("=");
  } else {
    if (c % 2 == 0) {
      if (abs(a) > abs(b)) out(">"); else if (abs(a) < abs(b)) out("<"); else out("=");
    } else {
      if (a > b) out(">"); else if (a < b) out("<"); else out("=");
    }
  }

  return 0;
}
