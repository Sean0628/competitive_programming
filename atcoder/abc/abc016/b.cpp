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
  int a, b, c; cin >> a >> b >> c;

  bool add = false, sub = false;
  if (a+b == c) add = true;
  if (a-b == c) sub = true;

  if (add && sub) {
    out("?");
  } else if (add) {
    out("+");
  } else if (sub) {
    out("-");
  } else {
    out("!");
  }

  return 0;
}
