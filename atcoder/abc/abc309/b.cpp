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
  int n; cin >> n;
  vector<string> a(n);

  rep(i, n) cin >> a[i];

  vector<vector<char>> ans(n, vector<char>(n));
  rep(i, n) {
    rep(j, n) {
      if (i == n-1 || j == n-1 || i == 0 || j == 0) {
        int x = i, y = j;
        if (i == 0) y++, chmin(y, n-1);
        if (j == 0) x--, chmax(x, 0);
        if (i == n-1) y--, chmax(y, 0);
        if (j == n-1) x++, chmin(x, n-1);

        ans[x][y] = a[i][j];
      } else ans[i][j] = a[i][j];
    }
  }

  rep(i, n) {
    rep(j, n) {
      cout << ans[i][j];
    }
    cout << endl;
  }
  return 0;
}
