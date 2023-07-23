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

  rep(i, n) {
    int a; cin >> a;
    a--;
    g[i].push_back(a);
  }

  auto dfs = [&](auto self, int v, vector<bool>& visited, vector<int>& tmp) -> bool {
    bool res = false;
    visited[v] = true;
    tmp.push_back(v);

    for (int u : g[v]) {
      if (visited[u]) {
        res = true;
        break;
      }

      res = self(self, u, visited, tmp);
    }

    return res;
  };

  rep(i, n) {
    vector<bool> visited(n, false);
    vector<int> tmp;
    bool ok = dfs(dfs, i, visited, tmp);

    if (ok) {
      reverse(tmp.begin(), tmp.end());
      vector<int> ans;
      int i = tmp[0], ni = g[i][0];
      while (true) {
        ans.push_back(i);
        if (ni == tmp[0]) break;
        i = ni;
        ni = g[i][0];
      }

      out(ans.size());
      for (int v : ans) cout << v + 1 << endl;
      return 0;
    }
  }

  return 0;
}
