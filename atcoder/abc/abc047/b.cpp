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
  int w, h, n; cin >> w >> h >> n;
  vector<string> s(h);
  rep(i, h) s[i] = string(w, '.');

  auto f = [&](int x, int y, int op) {
    if (op == 1) {
      rep(i, h) rep(j, x) s[i][j] = '#';
    } else if (op == 2) {
      rep(i, h) for (int j = x; j < w; ++j) s[i][j] = '#';
    } else if (op == 3) {
      rep(i, y) rep(j, w) s[i][j] = '#';
    } else {
      for (int i = y; i < h; ++i) rep(j, w) s[i][j] = '#';
    }
  };

  rep(i, n) {
    int x, y, a; cin >> x >> y >> a;

    f(x, y, a);
  }

  int ans = 0;
  rep(i, h) rep(j, w) if (s[i][j] == '.') ++ans;

  out(ans);

  return 0;
}
