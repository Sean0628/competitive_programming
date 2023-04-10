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
  int k, s; cin >> k >> s;
  int ans = 0;
  rep(x, k+1) {
    rep(y, k+1) {
      int z = s - x - y;
      if (0 <= z && z <= k) ans++;
    }
  }

  out(ans);
  return 0;
}
