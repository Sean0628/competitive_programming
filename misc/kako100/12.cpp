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
  vector rel(n, vector<bool> (n, false));
  rep(i, m) {
    int x, y; cin >> x >> y;
    x--; y--;
    rel[x][y] = true;
    rel[y][x] = true;
  }
  rep(i, n) rel[i][i] = true;

  int ans = 1;

  rep(i, 1<<n) {
    bool ok = true;

    rep(j, n) {
      rep(k, n) {
        if (i & (1 << j) && i & (1 << k)) {
          if (!rel[j][k]) ok = false;
        }
      }
    }
    if (ok) chmax(ans, __builtin_popcount(i));
  }

  out(ans);
  return 0;
}
