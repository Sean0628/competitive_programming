#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll l = 0, r = 1'000'000'000;

  auto check = [&](ll x) {
    ll sum = 0;
    rep(i, n) sum += (x / a[i]);
    return (sum >= k);
  };

  while (l < r) {
    ll m = (l+r) / 2;
    bool ans = check(m);

    if (ans) r = m;
    else l = m + 1;
  }

  cout << l << endl;
  return 0;
}
