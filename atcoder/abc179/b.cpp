#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<vector<int>> d(n, vector<int>(2));
  rep(i, n) rep(j, 2) cin >> d[i][j];

  int cnt = 0;
  bool ok = false;
  rep(i, n) {
    if (d[i][0] != d[i][1]) {
      cnt = 0;
      continue;
    }

    cnt++;
    if (cnt == 3) ok = true;
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
