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

using edge = struct { int to; int cost; };

int main() {
  int n; cin >> n;

  vector<vector<edge>> g(n);

  rep(i, n-1) {
    int a, b, c; cin >> a >> b >> c;
    a--; b--;

    g[a].emplace_back(edge{b, c});
    g[b].emplace_back(edge{a, c});
  }

  vector<ll> cost(n);

  auto dfs = [&](auto dfs, int v, int p, ll d) -> void {
    cost[v] = d;
    for (auto &e : g[v]) {
      if (e.to == p) continue;

      dfs(dfs, e.to, v, d + e.cost);
    }
  };

  int q, k; cin >> q >> k;
  k--;
  dfs(dfs, k, -1, 0);

  rep(i, q) {
    int x, y; cin >> x >> y;
    x--; y--;
    out(cost[x] + cost[y]);
  }
  return 0;
}
