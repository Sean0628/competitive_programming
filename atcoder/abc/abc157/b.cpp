#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  vector a(3, vector<int> (3));
  vector c(3, vector<bool> (3, false));
  rep(i, 3) rep(j, 3) cin >> a[i][j];

  int n; cin >> n;
  vector<int> b(n);
  rep(i, n) cin >> b[i];

  rep(i, 3) rep(j, 3) {
    rep(k, n) if (a[i][j] == b[k]) c[i][j] = true;
  }

  bool ok = false;
  if (c[0][0] && c[1][0] && c[2][0]) ok = true;
  if (c[0][1] && c[1][1] && c[2][1]) ok = true;
  if (c[0][2] && c[1][2] && c[2][2]) ok = true;

  if (c[0][0] && c[0][1] && c[0][2]) ok = true;
  if (c[1][0] && c[1][1] && c[1][2]) ok = true;
  if (c[2][0] && c[2][1] && c[2][2]) ok = true;

  if (c[0][0] && c[1][1] && c[2][2]) ok = true;
  if (c[0][2] && c[1][1] && c[2][0]) ok = true;

  cyn(ok);
  return 0;
}
