#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  vector<int> a(n), l(q), r(q);
  rep(i, n) cin >> a[i];
  rep(i, q) cin >> l[i] >> r[i];

  vector<int> s(n+1, 0);
  rep(i, n) s[i+1] = s[i] + a[i];

  rep(i, q) cout << s[r[i]]-s[l[i]-1] << endl;

  return 0;
}
