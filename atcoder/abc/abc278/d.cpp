#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  int q; cin >> q;

  int base = -1;
  vector<map<ll, ll>> b(q);
  int idx = 0;
  rep(j, q) {
    int c, i, x; cin >> c;

    if (c == 1) {
      cin >> x;
      base = x;
      idx++;
    } else if (c == 2) {
      cin >> i >> x;
      i--;
      b[idx][i] += x;
    } else {
      cin >> i;
      i--;
      ll ans;
      if (base == -1) {
        ans = a[i] + b[idx][i];
      } else {
        ans = base + b[idx][i];
      }

      cout << ans << endl;
    }
  }
  return 0;
}
