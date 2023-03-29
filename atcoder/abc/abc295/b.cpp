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
  int r, c; cin >> r >> c;
  vector<string> a(r);

  rep(i, r) cin >> a[i];

  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, 1, 0, -1};

  auto f = [&](int i, int j, int num, auto f) -> void {
    if (!('0' <= a[i][j] && a[i][j] <= '9')) a[i][j] = '.';

    rep(k, 4) {
      int ni = i + dx[k];
      int nj = j + dy[k];

      if (ni < 0 || ni >= r || nj < 0 || nj >= c || num == 0) continue;

      f(ni, nj, num-1, f);
    }

    return;
  };

  rep(i, r) {
    rep(j, c) {
      if (a[i][j] == '.' || a[i][j] == '#') continue;

      int num = a[i][j] - '0';
      f(i, j, num, f);
    }
  }

  rep(i, r) rep(j, c) if ('0' <= a[i][j] && a[i][j] <= '9') a[i][j] = '.';

  rep(i, r) out(a[i]);
  return 0;
}
