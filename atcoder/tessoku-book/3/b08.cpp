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
  vector<vector<int>> sum(1501, vector<int>(1501));

  rep(i, n) {
    int x, y; cin >> x >> y;
    sum[x][y]++;
  }

  for (int i = 1; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      sum[i][j] += sum[i-1][j];
    }
  }

  for (int i = 1; i <= 1500; i++) {
    for (int j = 1; j <= 1500; j++) {
      sum[i][j] += sum[i][j-1];
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
