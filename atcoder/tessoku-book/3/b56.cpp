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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const ll MOD = 2147483647;

int main() {
  int n, q; cin >> n >> q;
  string s; cin >> s;
  vector<ll> l(q), r(q);
  rep(i, q) cin >> l[i] >> r[i];

  vector<ll> pow100(n+1);
  pow100[0] = 1;
  rep(i, n) pow100[i+1] = pow100[i] * 100LL % MOD;

  vector<ll> t(n), h(n+1), tr(n), hr(n+1);
  rep(i, n) t[i] = (s[i] - 'a') + 1;
  h[0] = 0;
  rep(i, n) h[i+1] = (h[i] * 100LL + t[i]) % MOD;

  reverse(s.begin(), s.end());

  rep(i, n) tr[i] = (s[i] - 'a') + 1;
  hr[0] = 0;
  rep(i, n) hr[i+1] = (hr[i] * 100LL + tr[i]) % MOD;

  auto getHash = [&](int l, int r, const vector<ll>& hash) {
    ll res = hash[r] - (hash[l-1] * pow100[r-l+1] % MOD);
    if (res < 0) res += MOD;
    return res;
  };

  rep(i, q) {
    ll h1 = getHash(l[i], r[i], h);
    ll h2 = getHash(n-r[i]+1, n-l[i]+1, hr);
    cyn(h1 == h2);
  }
  return 0;
}
