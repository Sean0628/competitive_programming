#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector p(n, vector<int> (n));
  vector<int> x(n), y(n);
  rep(i, n) {
    rep(j, n) {
      cin >> p[i][j];
      if (p[i][j] != 0) { x[i] = p[i][j]; y[j] = p[i][j]; };
    }
  }

  int inversionX = 0, inversionY = 0;
  rep(i, n) {
    for (int j = i+1; j < n; ++j) {
      if (x[i] > x[j]) inversionX++;
      if (y[i] > y[j]) inversionY++;
    }
  }

  cout << inversionX + inversionY << endl;
  return 0;
}
