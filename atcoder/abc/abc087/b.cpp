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
  int a, b, c, x; cin >> a >> b >> c >> x;

  int ans = 0;
  rep(i, a+1) {
    rep(j, b+1) {
      rep(k, c+1) {
        if (i*500+j*100+k*50 == x) ans++;
      }
    }
  }

  out(ans);
  return 0;
}
