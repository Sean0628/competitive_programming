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

  string srev = s;
  reverse(srev.begin(), srev.end());

  vector<ll> p100(n+1);
  p100[0] = 1;
  for (int i = 1; i <= n; i++) p100[i] = 100LL * p100[i-1] % MOD;

  vector<ll> t(n+1), trev(n+1);
  for (int i = 1; i <= n; i++) {
    t[i] = (s[i-1] - 'a') + 1;
    trev[i] = (srev[i-1] - 'a') + 1;
  }

  vector<ll> hl(n+1), hrev(n+1);
  for (int i = 1; i <= n; i++) {
    hl[i] = (100LL * hl[i-1] + t[i]) % MOD;
    hrev[i] = (100LL * hrev[i-1] + trev[i]) % MOD;
  }

  auto getHash = [&](ll l, ll r, vector<ll>& h) {
    ll val = h[r] - (h[l-1] * p100[r-l+1] % MOD);
    if (val < 0) val += MOD;

    return val;
  };

  rep(i, q) {
    ll h1 = getHash(l[i], r[i], hl);
    ll h2 = getHash(n-r[i]+1, n-l[i]+1, hrev);

    string ans = "No";
    if (h1 == h2) ans = "Yes";

    cout << ans << endl;
  }
  return 0;
}
