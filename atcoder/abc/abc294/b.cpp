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
  vector<vector<int>> a(h, vector<int> (w));
  vector<string> ans(h);

  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) {
    rep(j, w) {
      if (a[i][j] == 0) ans[i] += '.';
      else ans[i] += (char) 'A' + a[i][j]-1;
    }
  }

  rep(i, h) out(ans[i]);

  return 0;
}
