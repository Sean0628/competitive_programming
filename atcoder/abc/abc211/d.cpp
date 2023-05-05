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

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> g(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    --a; --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> dist(n, -1);
  queue<int> que;

  que.push(0);
  dist[0] = 0;

  vector<int> vs;

  // BFS
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    vs.push_back(v);

    for (int nv : g[v]) {
      if (dist[nv] != -1) continue;

      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  vector<mint> dp(n, 0);
  dp[0] = 1;
  for (int v : vs) {
    for (int nv : g[v]) {
      if (dist[nv] == dist[v] + 1) {
        dp[nv] += dp[v];
      }
    }
  }

  out(dp[n-1].val());

  return 0;
}
