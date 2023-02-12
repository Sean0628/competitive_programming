#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, q; cin >> n >> q;

  vector<vector<int>> to(n);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    a--, b--;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }

  vector<ll> vec(n);
  rep(i, q) {
    int p, x; cin >> p >> x;
    p--;
    vec[p] += x;
  }

  vector<bool> visited(n);
  vector<ll> sum(n+1);

  auto dfs = [&](auto dfs, int v, ll c) -> void {
    visited[v] = true;
    sum[v+1] = vec[v] + c;

    for (int u : to[v]) {
      if (visited[u]) continue;

      dfs(dfs, u, sum[v+1]);
    }
  };

  dfs(dfs, 0, sum[0]);

  for (int i = 1; i <= n; ++i) cout << sum[i] << " ";
  cout << endl;
  return 0;
}
