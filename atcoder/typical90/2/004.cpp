#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector a(h, vector<int> (w));
  vector<int> ah(h), aw(w);
  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
      ah[i] += a[i][j];
      aw[j] += a[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      int num = ah[i] + aw[j] - a[i][j];
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
