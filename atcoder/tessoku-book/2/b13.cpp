#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n);

  rep(i, n) cin >> a[i];

  vector<int> sum(n+1);
  sum[0] = 0;
  for (int i = 1; i <= n; ++i) {
    sum[i] = sum[i-1] + a[i-1];
  }

  vector<int> r(n);
  rep(i, n) {
    if (i == 0) r[i] = 0;
    else r[i] = r[i-1];

    while (r[i] < n && sum[r[i]+1] - sum[i] <= k) r[i]++;
  }

  ll ans = 0;
  rep(i, n) ans += (r[i] - i);

  cout << ans << endl;
  return 0;
}
