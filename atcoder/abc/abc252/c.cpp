#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  vector<vector<int>> cnt(10, vector<int> (10, 0));
  int ans = 1000, mx;

  rep(i, n) cin >> s[i];

  rep(i, n) rep(j, 10) cnt[(s[i][j] - '0')][j]++;

  rep (i, 10) {
    mx = 0;
    rep (j, 10) {
      mx = max(mx, 10 * (cnt[i][j] - 1) + j);
    }
    ans = min(ans, mx);
  }

  cout << ans << endl;

  return 0;
}
