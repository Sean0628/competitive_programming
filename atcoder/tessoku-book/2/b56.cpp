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
  vector<ll> l(q), r(q);
  rep(i, q) cin >> l[i] >> r[i];

  vector<ll> power100(n+1);
  power100[0] = 1;
  for (int i = 1; i <= n; ++i) power100[i] = 100LL * power100[i-1] % MOD;

  vector<ll> ta(n+1);
  for (int i = 1; i <= n; ++i) ta[i] = (s[i-1] - 'a') + 1;

  vector<ll> ha(n+1);
  for (int i = 1; i <= n; ++i) ha[i] = (100LL * ha[i-1] + ta[i]) % MOD;

  reverse(s.begin(), s.end());

  vector<ll> tb(n+1);
  for (int i = 1; i <= n; ++i) tb[i] = (s[i-1] - 'a') + 1;

  vector<ll> hb(n+1);
  for (int i = 1; i <= n; ++i) hb[i] = (100LL * hb[i-1] + tb[i]) % MOD;

  auto getHash = [&](ll l, ll r, vector<ll>& h) {
    ll val = h[r] - (h[l-1] * power100[r-l+1] % MOD);
    if (val < 0) val += MOD;
    return val;
  };

  rep(i, q) {
    ll h1 = getHash(l[i], r[i], ha);
    ll h2 = getHash(n-r[i]+1, n-l[i]+1, hb);

    string ans = "No";
    if (h1 == h2) ans = "Yes";

    cout << ans << endl;
  }
  return 0;
}
