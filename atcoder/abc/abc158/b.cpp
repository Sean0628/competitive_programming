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
  ll n, a, b; cin >> n >> a >> b;
  ll k = a + b;

  ll ans = 0;
  if (n <= k) {
    if (a > n) ans += n;
    else ans += a;
  } else {
    ans = (n / k) * a;
    n %= k;
    if (a > n) ans += n;
    else ans += a;
  }

  cout << ans << endl;
  return 0;
}
