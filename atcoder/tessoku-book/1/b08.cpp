#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  int q; cin >> q;
  vector<int> a(q), b(q), c(q), d(q);

  rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector v(1501, vector<int> (1501, 0));
  rep(i, n) v[x[i]][y[i]]++;

  vector s(1502, vector<int> (1502));
  for (int i = 1; i < 1502; ++i) {
    for (int j = 1; j < 1502; ++j) {
      s[i][j] = s[i][j-1] + v[i-1][j-1];
    }
  }

  for (int i = 1; i < 1502; ++i) {
    for (int j = 1; j < 1502; ++j) {
      s[i][j] += s[i-1][j];
    }
  }

  rep(i, q) {
    a[i]++; b[i]++, c[i]++; d[i]++;
    ll ans = s[c[i]][d[i]] + s[a[i]-1][b[i]-1] - s[a[i]-1][d[i]] - s[c[i]][b[i]-1];
    cout << ans << endl;
  }

  return 0;
}
