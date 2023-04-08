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
  int x, y; cin >> x >> y;
  set<int> s = {1, 3, 5, 7, 8, 10, 12};
  set<int> t = {4, 6, 9, 11};
  if (s.count(x) && s.count(y)) {
    out("Yes");
  } else if (t.count(x) && t.count(y)) {
    out("Yes");
  } else if (x == 2 && y == 2) {
    out("Yes");
  } else {
    out("No");
  }
  return 0;
}
