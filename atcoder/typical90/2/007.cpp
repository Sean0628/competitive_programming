#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int q; cin >> q;
  vector<int> b(q);
  rep(i, q) cin >> b[i];

  sort(a.begin(), a.end());

  rep(i, q) {
    auto it = lower_bound(a.begin(), a.end(), b[i]);
    int posX = it - a.begin(), posY = (it - 1) - a.begin();
    int x = INT_MAX, y = INT_MAX;
    if (posX >= 0) x = abs(a[posX]-b[i]);
    if (posY >= 0) y = abs(a[posY]-b[i]);
    int ans = min(x, y);
    cout << ans << endl;
  }

  return 0;
}
