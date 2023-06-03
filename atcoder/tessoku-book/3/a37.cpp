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
  ll n, m, b; cin >> n >> m >> b;
  vector<ll> a(n), c(m);
  ll atot = 0, ctot = 0;

  rep(i, n) {
    cin >> a[i];
    atot += a[i];
  }
  rep(i, m) {
    cin >> c[i];
    ctot += c[i];
  }

  ll ans = 0;
  ans += atot*m;
  ans += ctot*n;
  ans += b*n*m;

  out(ans);
  return 0;
}
