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
  int n; cin >> n;
  vector<vector<int>> g(n);

  rep(i, n-1) {
    int a, b; cin >> a >> b;
    --a; --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  for (auto& v : g) sort(v.begin(), v.end());

  vector<int> ans;
  auto dfs = [&](auto self, int v, int prev) -> void {
    ans.push_back(v+1);

    for (auto x : g[v]) {
      if (x == prev) continue;

      self(self, x, v);
      ans.push_back(v+1);
    }
  };

  dfs(dfs, 0, -1);

  for (auto x : ans) cout << x << " ";
  return 0;
}
