#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll MOD = 2147483647;

int main() {
  ll n, q; cin >> n >> q;
  string s; cin >> s;
  vector<ll> a(q), b(q), c(q), d(q);
  rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector<ll> t(n+1);
  for (int i = 1; i <= n; i++) t[i] = (s[i-1] - 'a') + 1;

  vector<ll> power100(n+1);
  power100[0] = 1;
  for (int i = 1; i <= n; i++) power100[i] = 100LL * power100[i-1] % MOD;

  vector<ll> h(n+1);
  for (int i = 1; i <= n; i++) h[i] = (100LL * h[i-1] + t[i]) % MOD;

  auto getHash = [&](ll l, ll r) {
    ll val = h[r] - (h[l-1] * power100[r-l+1] % MOD);
    if (val < 0) val += MOD;
    return val;
  };

  rep(i, q) {
    ll h1 = getHash(a[i], b[i]);
    ll h2 = getHash(c[i], d[i]);
    string ans = "No";
    if (h1 == h2) ans = "Yes";

    cout << ans << endl;
  }
  return 0;
}
