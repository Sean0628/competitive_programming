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
  vector<vector<int>> A(h, vector<int>(w)), sum(h+1, vector<int>(w+1, 0));

  rep(i, h) rep(j, w) cin >> A[i][j];

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      sum[i][j] = sum[i][j-1] + A[i-1][j-1];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      sum[i][j] += sum[i-1][j];
    }
  }
  int q; cin >> q;

  rep(i, q) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    a--; b--;

    int ans = sum[c][d] - sum[a][d] - sum[c][b] + sum[a][b];
    out(ans);
  }
  return 0;
}
