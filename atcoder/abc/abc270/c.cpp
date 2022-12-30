#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<vector<int>> to(n+1);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> ans;
  auto dfs = [&](auto f, int v, int p = -1) -> bool {
    if (v == x) {
      ans.push_back(v);
      return true;
    }

    for (int u : to[v]) {
      if (u == p) continue;
      if (f(f, u, v)) {
        ans.push_back(v);
        return true;
      }
    }
    return false;
  };

  dfs(dfs, y);

  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}

