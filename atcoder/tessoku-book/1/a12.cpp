#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

bool check(vector<ll>& a, ll m, ll k, ll n) {
  ll sum = 0;
  rep(i, n) sum += (m / a[i]);
  return (sum >= k);
}

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll l = 0, r = 1'000'000'000;
  while (l < r) {
    ll m = (l+r)/2;
    bool ans = check(a, m, k, n);
    if (ans) r = m;
    else l = m + 1;
  }

  cout << l << endl;
  return 0;
}
