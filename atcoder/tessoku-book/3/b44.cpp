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
  vector<vector<int>> a(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];

  vector<int> col(n);
  rep(i, n) col[i] = i;

  int q; cin >> q;
  rep(i, q) {
    int c; cin >> c;
    int x, y; cin >> x >> y;
    x--; y--;

    if (c == 1) swap(col[x], col[y]);
    else out(a[col[x]][y]);
  }
  return 0;
}
