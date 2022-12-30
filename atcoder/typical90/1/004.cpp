#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int> (w));
  vector<int> totr(h), totc(w);

  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
      totr[i] += a[i][j];
      totc[j] += a[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      int num  = totr[i] + totc[j] - a[i][j];
      cout << num;
      if (j != w-1) printf(" ");
      else printf("\n");
    }
  }
  return 0;
}
