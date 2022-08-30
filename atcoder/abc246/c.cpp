#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, x; cin >> n >> k >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> b(n);
  ll c = 0, s = 0;
  rep(i, n) {
    b[i] = a[i]%x;
    c += a[i]/x;
    s += a[i];
  }

  if (c >= k) {
    s -= (ll) x*k;
  } else {
    s -= c*x;
    k -= c;
    k = min(k, n);
    sort(b.rbegin(), b.rend());
    rep(i, k) s -= b[i];
  }

  cout << s << endl;
  return 0;
}
