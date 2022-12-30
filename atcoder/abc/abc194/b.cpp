#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int ans = INT_MAX;
  rep(i, n) {
    rep(j, n) {
      if (i == j) {
        ans = min(ans, a[i]+b[j]);
      } else {
        int m = max(a[i], b[j]);
        ans = min(ans, m);
      }
    }
  }

  cout << ans << endl;

  return 0;
}
