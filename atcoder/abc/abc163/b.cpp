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
  ll n, m; cin >> n >> m;
  vector<ll> a(m);
  rep(i, m) cin >> a[i];

  ll sum = 0;
  rep(i, m) sum += a[i];

  ll ans = -1;
  if (n - sum >= 0) ans = n - sum;
  cout << ans << endl;


  return 0;
}
