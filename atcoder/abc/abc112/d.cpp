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
  int n, m; cin >> n >> m;
  int ans = 1;

  for (int a = 1; a*a <= m; ++a) {
    if (m%a != 0) continue;

    int b = m/a;

    if ((ll) a*n <= m) ans = max(ans, a);
    if ((ll) b*n <= m) ans = max(ans, b);
  }

  out(ans);
  return 0;
}
