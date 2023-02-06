#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  ll a, b, x; cin >> a >> b >> x;

  ll l = 0, r = 1e9+1LL;
  auto keta = [](ll c) {
    int res = 0;
    while (c) {
      c /= 10;
      ++res;
    }
    return res;
  };

  auto f = [&](ll c) {
    return a*c + b*keta(c);
  };

  while (r-l > 1) {
    ll mid = (l+r)/2;
      if (f(mid) <= x) l = mid; else r = mid;
  }

  cout << l << endl;
  return 0;
}
