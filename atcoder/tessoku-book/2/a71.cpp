#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  sort(a.begin(), a.end());

  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());

  int ans = 0;
  rep(i, n) {
    ans += a[i]*b[i];
  }
  cout << ans << endl;
  return 0;
}
