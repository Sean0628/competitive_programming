#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, l; cin >> n >> l;
  vector<ll> a(n);
  vector<char> b(n);
  rep(i, n) cin >> a[i] >> b[i];

  ll ans = -1e9;
  rep(i, n) {
    ll m = a[i];
    if (b[i] == 'E') m = l - a[i];

    ans = max(ans, m);
  }

  cout << ans << endl;
  return 0;
}
