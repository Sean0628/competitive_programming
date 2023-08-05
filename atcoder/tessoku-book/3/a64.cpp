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
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<P>> to(n);
  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
    a--, b--;
    to[a].push_back({c, b});
    to[b].push_back({c, a});
  }

  // dijkstra's algorithm
  vector<bool> fixed(n);
  vector<int> curr(n, INF);
  priority_queue<P, vector<P>, greater<P>> q;

  curr[0] = 0;
  q.push({curr[0], 0});

  while (!q.empty()) {
    int v = q.top().second; q.pop();
    if (fixed[v]) continue;
    fixed[v] = true;

    for (auto nv : to[v]) {
      int cost = nv.first;
      int next = nv.second;
      if (curr[next] <= curr[v] + cost) continue;

      curr[next] = curr[v] + cost;
      q.push({curr[next], next});
    }
  }

  for (auto v : curr) {
    if (v == INF) v = -1;
    cout << v << "\n";
  }
  return 0;
}
