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
  ll n, a, b; cin >> n >> a >> b;
  vector<ll> x(n); rep(i, n) cin >> x[i];

  ll ans = 0;
  rep(i, n-1) {
    ll cost = min(a*(x[i+1] - x[i]), b);
    ans += cost;
  }
  out(ans);
  return 0;
}
