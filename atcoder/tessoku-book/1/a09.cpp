#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, n; cin >> h >> w >> n;
  vector<int> a(n), b(n), c(n), d(n);
  rep(i, n) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--; b[i]--; c[i]--; d[i]--;
  }

  vector v(h+1, vector<int> (w+1, 0));
  rep(i, n) {
    v[a[i]][b[i]]++;
    v[c[i]+1][d[i]+1]++;
    v[a[i]][d[i]+1]--;
    v[c[i]+1][b[i]]--;
  }

  vector s(h+2, vector<int> (w+2, 0));
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      s[i][j] = s[i][j-1] + v[i-1][j-1];
    }
  }

  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      s[i][j] = s[i-1][j] + s[i][j];
    }
  }

  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      cout << s[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
