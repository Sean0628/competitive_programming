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
  vector<int> l(q), r(q);
  rep(i, q) cin >> l[i] >> r[i];

  vector<ll> pow100(n+1);
  pow100[0] = 1;
  rep(i, n) pow100[i+1] = pow100[i] * 100 % MOD;

  vector<ll> t(n), h(n+1);
  rep(i, n) t[i] = (s[i] - 'a') + 1;
  h[0] = 0;
  rep(i, n) h[i+1] = (h[i] * 100LL + t[i]) % MOD;

  reverse(s.begin(), s.end());

  vector<ll> rt(n), rh(n+1);

  rep(i, n) rt[i] = (s[i] - 'a') + 1;
  rh[0] = 0;
  rep(i, n) rh[i+1] = (rh[i] * 100LL + rt[i]) % MOD;

  auto getHash = [&](int l, int r, vector<ll>& h) {
    ll res = h[r] - h[l] * pow100[r-l] % MOD;
    if (res < 0) res += MOD;

    return res;
  };

  rep(i, q) {
    int hl = getHash(l[i]-1, r[i], h);
    int hr = getHash(n-r[i], n-l[i]+1, rh);

    cyn(hl == hr);
  }

  return 0;
}
