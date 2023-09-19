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

int main() {
  int n; cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto calc = [&](ll x, ll y, int i) {
    ll res = 0;
    res += abs(x - a[i]);
    res += abs(a[i] - b[i]);
    res += abs(b[i] - y);
    return res;
  };

  ll ans = LLONG_MAX;
  rep(i, n) rep(j, n) {
    ll sum = 0;
    rep(k, n) sum += calc(a[i], b[j], k);

    chmin(ans, sum);
  }

  out(ans);
  return 0;
}
