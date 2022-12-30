#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, q; cin >> n >> q;
  vector<ll> a(n+1), b(n+1);

  for (int i = 1; i <= n; i++) cin >> a[i];

  ll ans = 0;
  for (int i = 1; i < n; i++) {
    b[i] = a[i+1] - a[i];
    ans += abs(b[i]);
  }

  for (int i = 1; i <= q; i++) {
    ll l, r, v; cin >> l >> r >> v;
    ll bfr = abs(b[l-1]) + abs(b[r]);

    if (l >= 2) b[l-1] += v;
    if (r <= n-1) b[r] -= v;

    ll aft = abs(b[l-1]) + abs(b[r]);

    ans += (aft - bfr);

    cout << ans << endl;
  }

  return 0;
}
