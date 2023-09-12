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
  vector relation(n, vector<bool>(n));
  rep(i, m) {
    int x, y; cin >> x >> y;
    x--; y--;
    relation[x][y] = true;
    relation[y][x] = true;
  }
  rep(i, n) relation[i][i] = true;

  int ans = 1;

  rep(bit, 1<<n) {
    bool ok = true;

    rep(i, n) {
      rep(j, n) {
        if (bit & (1 << i) && bit & (1 << j)) {
          if (!relation[i][j]) ok = false;
        }
      }
    }

    if (ok) chmax(ans, __builtin_popcount(bit));
  }

  out(ans);
  return 0;
}
