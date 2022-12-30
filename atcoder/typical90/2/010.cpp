#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> c(n), p(n);
  rep(i, n) cin >> c[i] >> p[i];

  vector<int> sum1(n+1, 0), sum2(n+1, 0);

  for (int i = 1; i <= n; ++i) {
    int add1 = 0, add2 = 0;
    if (c[i-1] == 1) add1 = p[i-1];
    else add2 = p[i-1];
    sum1[i] = sum1[i-1] + add1;
    sum2[i] = sum2[i-1] + add2;
  }

  int q; cin >> q;
  rep(i, q) {
    int l, r; cin >> l >> r;
    int res1 = sum1[r] - sum1[l-1];
    int res2 = sum2[r] - sum2[l-1];
    cout << res1 << " " << res2 << endl;
  }
  return 0;
}
