#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m), c(m);
  rep(i, m) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--, b[i]--;
  }

  vector<P> l;
  rep(i, m) l.emplace_back(make_pair(c[i], i));
  sort(l.begin(), l.end());

  dsu d(n);
  int ans = 0;
  rep(i, l.size()) {
    int idx = l[i].second;
    if (d.same(a[idx], b[idx])) continue;

    d.merge(a[idx], b[idx]);
    ans += c[idx];
  }

  cout << ans << endl;
  return 0;
}
