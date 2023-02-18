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
  ll a, b, c, d; cin >> a >> b >> c >> d;
  ll all = b - a + 1;
  ll ca = b/c;
  ll cp = (a-1)/c;
  ll da = b/d;
  ll dp = (a-1)/d;

  ll lcm = (c*d)/gcd(c, d);
  ll cda = b/lcm;
  ll cdp = (a-1)/lcm;
  ll ans = all - (ca - cp) - (da - dp) + (cda - cdp);
  out(ans);

  return 0;
}
