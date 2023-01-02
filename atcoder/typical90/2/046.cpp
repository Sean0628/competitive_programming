#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n);
  map<int, int> x, y, z;
  rep(i, n) {
    cin >> a[i];
    a[i] %= 46;
    x[a[i]]++;
  }
  rep(i, n) {
    cin >> b[i];
    b[i] %= 46;
    y[b[i]]++;
  }
  rep(i, n) {
    cin >> c[i];
    c[i] %= 46;
    z[c[i]]++;
  }

  ll ans = 0;
  rep(i, 46) {
    rep(j, 46) {
      rep(k, 46) {
        if ((i+j+k) % 46 == 0) ans += x[i]*y[j]*z[k];
      }
    }
  }

  cout << ans << endl;

  return 0;
}
