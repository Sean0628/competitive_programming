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

  vector<int> s(n+1, 0);
  rep(i, n) s[i+1] = s[i] + a[i];

  vector<int> r(n+1);
  rep(i, n) {
    if (i == 0) r[i] = 0;
    else r[i] = r[i-1];

    while (r[i] < n && s[r[i]+1] - s[i] <= k) r[i]++;
  }

  ll ans = 0;

  rep(i, n) ans += (r[i] - i);

  cout << ans << endl;
  return 0;
}
