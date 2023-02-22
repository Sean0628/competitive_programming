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
  int n, k; cin >> n >> k;

  double ans = 0;
  for (int i = 1; i <= n; ++i) {
    double p = 1;
    int x = i;
    while (x < k) {
      p *= 0.5;
      x *= 2;
    }
    ans += p/n;
  }

  printf("%.10f\n", ans);
  return 0;
}
