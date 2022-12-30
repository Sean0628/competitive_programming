#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector c(h, vector<char> (w));
  rep(i, h) {
    rep(j, w) {
      cin >> c[i][j];
    }
  }

  vector<int> x(w, 0);
  rep(i, h) {
    rep(j, w) {
      if (c[i][j] == '#') x[j]++;
    }
  }

  rep(i, w) cout << x[i] << " ";
  cout << endl;
  return 0;
}
