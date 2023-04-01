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
  vector<string> a(h);
  rep(i, h) cin >> a[i];

  vector<int> dx = {1, -1, 1, 1, 0, -1, 0, -1};
  vector<int> dy = {1, 1, -1, 0, 1, 0, -1, -1};

  vector ans(h, vector(w, 0));
  auto check = [&](int i, int j) {
    if (a[i][j] == '#') return;

    rep(k, 8) {
      int ni = i + dx[k];
      int nj = j + dy[k];

      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (a[ni][nj] == '#') ans[i][j]++;
    }
  };

  rep(i, h) rep(j, w) {
    check(i, j);
  }

  rep(i, h) {
    rep(j, w) {
      if (a[i][j] == '#') cout << '#';
      else cout << ans[i][j];
    }
    cout << endl;
  }

  return 0;
}
