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
  int n, m; cin >> n >> m;
  vector<vector<int>> b(n, vector<int>(m));

  rep(i, n) rep(j, m) cin >> b[i][j];

  vector<vector<int>> x(n, vector<int>(m)), y(n, vector<int>(m));

  rep(i, n) {
    rep(j, m) {
      x[i][j] = (b[i][j]+6)/7;
      y[i][j] = (b[i][j]-1)%7+1;
    }
  }

  bool ok = true;

  rep(i, n) {
    rep(j, m) {
      if (0 < i && x[i][j] != x[i-1][j]+1) ok = false;
      if (0 < j && y[i][j] != y[i][j-1]+1) ok = false;
      if (0 < j && x[i][j] != x[i][j-1]) ok = false;
      if (0 < i && y[i][j] != y[i-1][j]) ok = false;
    }
  }

  cyn(ok);
  return 0;
}
