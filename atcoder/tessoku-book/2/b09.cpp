#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  rep(i, n) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector v(1502, vector<int> (1502, 0));

  rep(i, n) {
    v[a[i]][b[i]]++;
    v[c[i]][d[i]]++;
    v[a[i]][d[i]]--;
    v[c[i]][b[i]]--;
  }

  vector s(1503, vector<int> (1503, 0));

  for (int i = 1; i < 1502; i++) {
    for (int j = 1; j < 1502; j++) {
      s[i][j] = s[i][j-1] + v[i-1][j-1];
    }
  }

  for (int i = 1; i < 1502; i++) {
    for (int j = 1; j < 1502; j++) {
      s[i][j] = s[i-1][j] + s[i][j];
    }
  }

  int cnt = 0;
  rep(i, 1502) rep(j, 1502) {
    if (s[i][j] > 0) cnt++;
  }

  cout << cnt << endl;

  return 0;
}

