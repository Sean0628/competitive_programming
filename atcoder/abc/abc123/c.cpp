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
  int m = 5;
  ll n; cin >> n;
  vector<ll> a(m);
  rep(i, m) cin >> a[i];

  ll mm = LONG_MAX;
  rep(i, m) {
    mm = min(mm, a[i]);
  }

  ll ans = ((n+mm-1)/mm)+4;
  out(ans);

  return 0;
}
