#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

using mint = modint1000000007;
const int MOD = 1e9+7;

mint nCr(int n, int r) {
  mint x = 1, y = 1;
  rep(i, r) {
    x *= n-i;
    y *= i+1;
  }

  return x/y;
}

int main() {
  int x, y; cin >> x >> y;
  if ((x+y)%3 != 0) {
    cout << 0 << endl;
    return 0;
  }

  int n = (x+y)/3;
  x -= n; y -= n;
  if (x < 0 || y < 0) {
    cout << 0 << endl;
    return 0;
  }

  mint ans = nCr(x+y, x);
  cout << ans.val() << endl;

  return 0;
}
