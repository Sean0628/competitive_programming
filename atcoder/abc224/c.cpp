#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<ll> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  int cnt = 0;
  rep(i, n) rep(j, i) rep(k, j) {
    ll xa = x[j]-x[i];
    ll ya = y[j]-y[i];
    ll xb = x[k]-x[i];
    ll yb = y[k]-y[i];

    if (xa*yb != xb*ya) cnt++;
  }
  cout << cnt << endl;
  return 0;
}
