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

  vector<int> lcs(n+1), rcs(n+1);

  lcs[1] = a[0];
  for (int i = 2; i <= n; ++i) {
    lcs[i] = max(lcs[i-1], a[i-1]);
  }

  rcs[n] = a[n-1];
  for (int i = n - 1; i > 0; --i) {
    rcs[i] = max(rcs[i+1], a[i-1]);
  }
  int d; cin >> d;
  rep(i, d) {
    int l, r; cin >> l >> r;

    int ans = max(lcs[l-1], rcs[r+1]);
    cout << ans << endl;
  }
  return 0;
}
