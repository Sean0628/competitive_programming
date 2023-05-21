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
  double n; cin >> n;

  double l = 0, r = 100;

  while (r-l > 1e-4) {
    double mid = (l+r) / 2.0;

    if (mid*mid*mid+mid > n) r = mid;
    else l = mid;
  }

  printf("%.10f\n", l);

  return 0;
}
