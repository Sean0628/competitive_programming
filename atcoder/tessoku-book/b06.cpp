#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  cin >> q;
  vector<int> l(q), r(q);
  rep(i, q) cin >> l[i] >> r[i];

  vector<int> sw(n+1, 0), sl(n+1, 0);

  rep(i, n) {
    if (a[i] == 1) sw[i+1] = sw[i] + 1;
    else sw[i+1] = sw[i];
  }
  rep(i, n) {
    if (a[i] == 0) sl[i+1] = sl[i] + 1;
    else sl[i+1] = sl[i];
  }

  rep(i, q) {
    int wc = sw[r[i]] - sw[l[i]-1];
    int lc = sl[r[i]] - sl[l[i]-1];
    string ans;
    if (wc > lc) ans = "win";
    else if (wc < lc) ans = "lose";
    else ans = "draw";

    cout << ans << endl;
  }

  return 0;
}
