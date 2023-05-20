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
  vector<vector<int>> x(1501, vector<int>(1501));

  rep(i, n) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    x[a][b]++;
    x[a][d]--;
    x[c][b]--;
    x[c][d]++;
  }

  rep(i, 1501) rep(j, 1500) x[i][j+1] += x[i][j];
  rep(i, 1500) rep(j, 1501) x[i+1][j] += x[i][j];

  int ans = 0;
  rep(i, 1501) rep(j, 1501) if (x[i][j] > 0) ans++;

  out(ans);

  return 0;
}
