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
  vector<vector<P>> to(n);

  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
    a--; b--;
    to[a].push_back({b, c});
    to[b].push_back({a, c});
  }

  vector<bool> visited(n, false);
  auto dfs = [&](auto dfs, int v) -> int {
    visited[v] = true;
    int res = 0;
    for (auto p : to[v]) {
      int u = p.first;
      int c = p.second;
      if (visited[u]) continue;
      chmax(res, dfs(dfs, u) + c);
    }
    visited[v] = false;
    return res;
  };

  int ans = 0;
  rep(i, n) {
    chmax(ans, dfs(dfs, i));
  }

  out(ans);

  return 0;
}
