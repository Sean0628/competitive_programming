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
  vector c(10, vector(10, 0));
  rep(i, 10) rep(j, 10) cin >> c[i][j];

  rep(k, 10) rep(i, 10) rep(j, 10) {
    c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
  }

  int ans = 0;
  rep(i, h) rep(j, w) {
    int x; cin >> x;

    if (x == -1) continue;
    ans += c[x][1];
  }

  out(ans);
  return 0;
}
