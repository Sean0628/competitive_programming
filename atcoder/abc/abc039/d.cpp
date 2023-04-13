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
  int h, w; cin >> h >> w;
  vector<string> s(h), t(h, string(w, '.'));
  rep(i, h) cin >> s[i];
  vector<vector<bool>> v(h, vector<bool>(w, false));
  vector<int> dx = {1, -1, 1, 1, 0, -1, 0, -1};
  vector<int> dy = {1, 1, -1, 0, 1, 0, -1, -1};

  auto check = [&](int y, int x) {
    bool ok = true;

    rep(i, 8) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
      if (s[ny][nx] != '#') ok = false;
    }

    return ok;
  };

  auto f = [&](int y, int x) {
    t[y][x] = '#';

    rep(i, 8) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;

      t[ny][nx] = '#';
    }
  };

  rep(i, h) rep(j, w) {
    if (s[i][j] == '.') continue;

    if (check(i, j)) v[i][j] = true;
  }

  rep(i, h) rep(j, w) if (v[i][j]) f(i, j);

  bool ok = true;

  rep(i, h) if (s[i] != t[i]) ok = false;

  if (ok) {
    out("possible");
    rep(i, h) {
      rep(j, w) if (v[i][j]) cout << '#'; else cout << '.';
      cout << endl;
    }
  } else {
    out("impossible");
  }
  return 0;
}
