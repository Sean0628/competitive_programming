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
  int x; cin >> x;

  int ans = 1;
  for (int b = 2; b <= x; ++b) {
    int power = b*b;

    for (int p = 2;; ++p) {
      if (power > x) break;

      ans = max(ans, power);
      power *= b;
    }
  }

  out(ans);

  return 0;
}
