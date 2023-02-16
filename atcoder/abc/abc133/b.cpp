#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, d; cin >> n >> d;
  vector x(n, vector<int> (d));

  rep(i, n) rep(j, d) {
    cin >> x[i][j];
  }

  int cnt = 0;
  rep(i, n) {
    rep(j, i) {
      double tot = 0;
      rep(k, d) {
        tot += (x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
      }

      tot = sqrt(tot);
      if (floor(tot) == tot) cnt++;
    }
  }

  out(cnt);

  return 0;
}
