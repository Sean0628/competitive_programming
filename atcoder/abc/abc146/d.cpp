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

struct Edge {
  int to, id;
};

int main() {
  int n; cin >> n;
  vector<vector<Edge>> g(n);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    --a; --b;
    g[a].emplace_back((Edge) { b, i });
    g[b].emplace_back((Edge) { a, i });
  }

  vector<int> ans(n-1);

  auto dfs = [&](auto f, int v, int c=-1, int p=-1) -> void {
    int k = 1;
    rep(i, g[v].size()) {
      int u = g[v][i].to, ei = g[v][i].id;
      if (u == p) continue;
      if (c == k) k++;
      ans[ei] = k; ++k;
      f(f, u, ans[ei], v);
    }
    return;
  };

  dfs(dfs, 0);

  int mx = 0;
  rep(i, n) mx = max(mx, (int)g[i].size());
  cout << mx << endl;
  rep(i, n-1) cout << ans[i] << endl;
  return 0;
}
