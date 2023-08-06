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
  int n, t; cin >> n >> t;
  t--;
  vector<vector<int>> to(n);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<bool> visited(n, false);
  vector<int> dp(n, 0);
  auto dfs = [&](auto self, int v) -> int {
    visited[v] = true;
    dp[v] = 0;

    for (auto u : to[v]) {
      if (visited[u]) continue;

      chmax(dp[v], self(self, u) + 1);
    }

    return dp[v];
  };

  dfs(dfs, t);

  for (auto v : dp) cout << v << " ";

  return 0;
}
