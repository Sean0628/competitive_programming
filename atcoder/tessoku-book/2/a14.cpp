#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n), c(n), d(n);
  set <int> st;
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  rep(i, n) cin >> d[i];

  vector<int> p(n*n), q(n*n);
  rep(i, n) rep(j, n) p[i*n+j] = a[i] + b[j];
  rep(i, n) rep(j, n) q[i*n+j] = c[i] + d[j];

  sort(q.begin(), q.end());

  bool ok = false;
  rep(i, n*n) {
    int pos = lower_bound(q.begin(), q.end(), k-p[i]) - q.begin();
    if (pos < n*n && q[pos] == k-p[i]) ok = true;
  }

  string ans = "No";
  if (ok) ans = "Yes";
  cout << ans << endl;
  return 0;
}
