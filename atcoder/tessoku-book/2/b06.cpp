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
  rep(i, n) {
    cin >> a[i];
    if (a[i] == 0) a[i] = -1;
  }

  vector<int> sum(n+1);
  for (int i = 1; i <= n; ++i) {
    sum[i] = sum[i-1] + a[i-1];
  }
  int q; cin >> q;

  rep(i, q) {
    int l, r; cin >> l >> r;
    int cnt = sum[r] - sum[l-1];

    string ans = "draw";
    if (cnt > 0) ans = "win";
    else if (cnt < 0) ans = "lose";

    cout << ans << endl;
  }
  return 0;
}
