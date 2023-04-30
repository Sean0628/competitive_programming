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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int h, w; cin >> h >> w;
  vector<string> a(h);
  rep(i, h) cin >> a[i];

  int mn = min(h, w);
  vector<int> ans(mn+1, 0);

  auto f = [&](int i, int j, int d) {
    if (i-d < 0 || i+d >= h || j-d < 0 || j+d >= w) return;

    while (i-d >= 0 && i+d < h && j-d >= 0 && j+d < w && a[i+d][j+d] == '#' && a[i+d][j-d] == '#' && a[i-d][j+d] == '#' && a[i-d][j-d] == '#') {
      d++;
    }
    if (d-1 >= 0) ans[d-1]++;
  };

  rep(i, h) {
    rep(j, w) {
      if (a[i][j] != '#') continue;

      f(i, j, 1);
    }
  }

  rep(i, mn) {
    cout << ans[i+1] << " ";
  }

  return 0;
}
