#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  map<int, int> mp;
  rep(i, n) {
    cin >> a[i];
    mp[a[i]]++;
  }

  vector<ll> nc(n+1);
  nc[0] = 0;
  auto f = [&](ll x) {
    if (x == 0) return nc[0];

    return nc[x] = x*(x-1)/2;
  };

  ll tot = 0;
  for (auto e : mp) {
    tot += f(e.second);
  }

  rep(i, n) {
    ll ans = tot;
    ans -= f(mp[a[i]]);
    ans += f(mp[a[i]]-1);
    cout << ans << endl;
  }
  return 0;
}
