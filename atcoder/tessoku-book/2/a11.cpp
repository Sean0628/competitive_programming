#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  auto iter = lower_bound(a.begin(), a.end(), x);
  int ans = iter - a.begin() + 1;
  cout << ans << endl;
  return 0;
}
