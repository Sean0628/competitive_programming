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
  vector<double> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  double t = 0, ans = 0;
  rep(i, n) t += a[i]/b[i];
  t /= 2;

  rep(i, n) {
    ans += min(a[i], t*b[i]);
    t -= min(a[i]/b[i], t);
  }

  printf("%.10f\n", ans);
  return 0;
}
