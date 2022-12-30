#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int> (w));

  rep(i, h) rep(j, w) cin >> a[i][j];

  rep(i, w) rep(j, h) {
    cout << a[j][i];
    if (j == (h -1)) {
      cout << "\n";
    } else {
      cout << " ";
    }
  }

  return 0;
}
