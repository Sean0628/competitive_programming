#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector a(n, vector<int> (n));
  map<int, int> mp;
  rep(i, n) mp[i] = i;
  rep(i, n) rep(j, n) {
    cin >> a[i][j];
  }

  int q; cin >> q;
  rep(i, q) {
    int c, x, y; cin >> c >> x >> y;
    x--; y--;

    if (c == 1) {
      int tmp = mp[x];
      mp[x] = mp[y];
      mp[y] = tmp;
    } else {
      cout << a[mp[x]][y] << endl;
    }
  }
  return 0;
}
