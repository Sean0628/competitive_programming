#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m, t; cin >> n >> m >> t;
  vector<ll> a(n), x(n);

  rep(i, n-1) cin >> a[i];
  rep(i, m) {
    ll ti, tv; cin >> ti >> tv;
    x[ti-1] = tv;
  }

  bool ok = true;
  rep(i, n) {
    t += x[i];

    t -= a[i];
    if (t <= 0) ok = false;

  }

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}
