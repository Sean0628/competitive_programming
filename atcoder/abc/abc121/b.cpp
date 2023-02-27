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
  int n, m, c; cin >> n >> m >> c;
  vector<int> b(m);
  vector a(n, vector<int> (m));
  rep(i, m) cin >> b[i];

  rep(i, n) rep(j, m) cin >> a[i][j];

  int cnt = 0;
  rep(i, n) {
    int tot = 0;
    rep(j, m) {
      tot += a[i][j]*b[j];
    }
    if (tot+c > 0) cnt++;
  }

  out(cnt);
  return 0;
}
