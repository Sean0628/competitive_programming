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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<P>> to(n);
  rep(i, m) {
    int u, v, c; cin >> u >> v >> c;
    u--; v--;
    to[u].push_back({c, v});
    to[v].push_back({c, u});
  }

  // dijkstra's algorithm
  vector<bool> fixed(n);
  vector<int> dist(n, INF);
  priority_queue<P, vector<P>, greater<P>> q;
  dist[0] = 0;
  q.push({dist[0], 0});

  while (!q.empty()) {
    auto [d, v] = q.top(); q.pop();
    if (fixed[v]) continue;
    fixed[v] = true;

    for (auto [cost, u] : to[v]) {
      int nd = d + cost;
      if (dist[u] <= nd) continue;

      dist[u] = nd;
      q.push({dist[u], u});
    }
  }

  for (auto c : dist) {
    if (c == INF) out(-1);
    else out(c);
  }

  return 0;
}
