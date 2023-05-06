#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<double, double>;
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
  }

  int cnt = 0;

  auto dfs = [&](auto dfs, int v, vector<bool>& visited) -> void {
    visited[v] = true;
    cnt++;

    for (auto nv : g[v]) {
      if (visited[nv]) continue;
      dfs(dfs, nv, visited);
    }
  };


  rep(i, n) {
    vector<bool> visited(n, false);
    dfs(dfs, i, visited);
  }

  out(cnt);

  return 0;
}
