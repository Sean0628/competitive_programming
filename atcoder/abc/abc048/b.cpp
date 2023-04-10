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
  ll a, b, x; cin >> a >> b >> x;
  ll ans = 0;


  if (a == 0) {
    ans = b / x + 1;
  } else {
    ans = b / x - (a - 1) / x;
  }

  out(ans);

  return 0;
}
