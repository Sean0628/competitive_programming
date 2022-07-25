#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y, z; cin >> n >> x >> y >> z;

  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  vector<bool> ok(n);

  auto f = [&](vector<P> p, int num) {
    sort(p.begin(), p.end());
    rep(i, num) ok[p[i].second] = true;
  };

  vector<P> p;

  rep(i, n) p.emplace_back(-a[i], i);
  f(p, x);

  p = vector<P>();
  rep(i, n) if (!ok[i]) {
    p.emplace_back(-b[i], i);
  }
  f(p, y);

  p = vector<P>();
  rep(i, n) if (!ok[i]) {
    p.emplace_back(-a[i]-b[i], i);
  }
  f(p, z);

  rep(i, n) if (ok[i]) cout << i+1 << endl;

  return 0;
}
