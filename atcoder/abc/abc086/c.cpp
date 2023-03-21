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
  int n; cin >> n;
  vector<int> t(n+1), x(n+1), y(n+1);

  t[0] = x[0] = y[0] = 0;

  for (int i = 1; i <= n; ++i) {
    cin >> t[i] >> x[i] >> y[i];
  }

  bool ok = true;
  rep(i, n) {
    int dx = abs(x[i+1]-x[i]);
    int dy = abs(y[i+1]-y[i]);
    int dt = t[i+1] - t[i];
    if (dt < dx+dy) ok = false;

    if ((dx+dy)%2 == dt%2) continue;

    ok = false;
  }

  cyn(ok);
  return 0;
}
