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
  int tx1, ty1, tx2, ty2, t, v, n;
  cin >> tx1 >> ty1 >> tx2 >> ty2 >> t >> v >> n;

  int d = t * v;
  vector<P> p(n);
  rep(i, n) cin >> p[i].first >> p[i].second;

  rep(i, n) {
    int x = p[i].first, y = p[i].second;
    double d1 = sqrt((tx1 - x) * (tx1 - x) + (ty1 - y) * (ty1 - y));
    double d2 = sqrt((tx2 - x) * (tx2 - x) + (ty2 - y) * (ty2 - y));
    if (d1 + d2 <= d) {
      out("YES");
      return 0;
    }
  }

  out("NO");
  return 0;
}
