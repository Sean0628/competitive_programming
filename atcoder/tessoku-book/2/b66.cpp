#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  rep(i, m) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
  }
  int q; cin >> q;
  vector<int> c(q), x(q), u(q), v(q);
  rep(i, q) {
    cin >> c[i];
    if (c[i] == 1) {
      cin >> x[i];
      x[i]--;
    }
    else {
      cin >> u[i] >> v[i];
      u[i]--; v[i]--;
    }
  }

  vector<bool> cancelled(m);
  rep(i, q) if (c[i] == 1)  cancelled[x[i]] = true;

  dsu d(n);
  rep(i, m) {
    if (cancelled[i] || d.same(a[i], b[i])) continue;

    d.merge(a[i], b[i]);
  }

  vector<string> ans(q, "No");
  for (int i = q-1; i >= 0; --i) {
    if (c[i] == 1) {
      if (!d.same(a[x[i]], b[x[i]])) d.merge(a[x[i]], b[x[i]]);
    } else {
      if (d.same(u[i], v[i])) ans[i] = "Yes";
    }
  }

  rep(i, q) {
    if (c[i] == 1) continue;

    cout << ans[i] << endl;
  }
  return 0;
}
