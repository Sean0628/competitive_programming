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

int main() {
  ll n; cin >> n;
  ll ans = 1e18;

  for (ll i = 1; i*i <= n; ++i) {
    if (n%i != 0) continue;

    ll j = n/i;
    ans = min(ans, i+j-2);
  }

  cout << ans << endl;
  return 0;
}
