#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<int> u(m), v(m);
  dsu d(n);
  rep(i, m) {
    cin >> u[i] >> v[i];
    v[i]--, u[i]--;
  }

  bool ok = true;
  rep(i, m) {
    if (d.leader(u[i]) == d.leader(v[i])) {
      ok = false;
      break;
    }
    d.merge(u[i], v[i]);
  }

  if (d.groups().size() > 1) ok = false;

  cyn(ok);

  return 0;
}
