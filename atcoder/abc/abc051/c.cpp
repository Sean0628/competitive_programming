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
  int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
  int dx = tx - sx, dy = ty - sy;

  string ans = "";
  ans += string(dy, 'U');
  ans += string(dx, 'R');

  ans += string(dy, 'D');
  ans += string(dx, 'L');

  ans += 'L';
  ans += string(dy+1, 'U');
  ans += string(dx+1, 'R');
  ans += 'D';

  ans += 'R';
  ans += string(dy+1, 'D');
  ans += string(dx+1, 'L');
  ans += 'U';

  out(ans);

  return 0;
}
