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
  int n; cin >> n;
  vector<ll> t(n);
  rep(i, n) cin >> t[i];

  auto lcm = [](ll a, ll b) {
    return a / gcd(a, b) * b;
  };

  ll ans = t[0];
  for (int i = 1; i < n; i++) {
    ans = lcm(ans, t[i]);
  }

  out(ans);
  return 0;
}
