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
  ll n, m, d; cin >> n >> m >> d;
  vector<ll> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll mx = -1;
  rep(i, n) {
    ll l = a[i] - d;
    ll r = a[i] + d;

    ll p = upper_bound(b.begin(), b.end(), r) - b.begin();

    if (p > 0) {
      ll x = b[p-1];
      if (x >= l) chmax(mx, x+a[i]);
    }
  }

  out(mx);
  return 0;
}
