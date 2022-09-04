#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<ll> a(n), p(n), x(n);
  rep(i, n) cin >> a[i] >> p[i] >> x[i];

  ll ans = INT_MAX;

  rep(i, n) {
    if (x[i] - a[i] > 0) ans = min(ans, p[i]);
  }

  cout << (ans == INT_MAX ? -1 : ans) << endl;

  return 0;
}
