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
  ll n, k; cin >> n >> k;
  vector<pair<ll, ll>> a(n);

  rep(i, n) {
    ll x, y; cin >> x >> y;
    a[i] = {x, y};
  }

  sort(a.begin(), a.end());

  int idx = 0;
  while (k > 0) {
    k -= a[idx].second;
    if (k <= 0) {
      out(a[idx].first);
      return 0;
    }
    idx++;
  }

  return 0;
}
