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
  ll n, w; cin >> n >> w;
  ll ans = 0;
  vector<pair<ll, ll>> a(n);
  rep(i, n) {
    int x, y; cin >> x >> y;
    a[i] = {x, y};
  }

  sort(a.rbegin(), a.rend());

  rep(i, n) {
    if (w == 0) break;

    ll v = a[i].first;
    ll ww = a[i].second;
    ll z = min(w, ww);
    ans += z * v;
    w -= z;
  }

  out(ans);
  return 0;
}
