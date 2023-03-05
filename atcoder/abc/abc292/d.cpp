#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<P> es;
  dsu d(n);
  rep(i, m) {
    int u, v; cin >> u >> v;
    u--, v--;
    es.emplace_back(u, v);
    d.merge(u, v);
  }

  vector<int> numV(n), numE(n);
  rep(v, n) numV[d.leader(v)]++;
  for (auto [a, b] : es) numE[d.leader(a)]++;

  bool ok = true;
  rep(i, n) {
    if (numV[i] != numE[i]) ok = false;
  }

  cyn(ok);
  return 0;
}
