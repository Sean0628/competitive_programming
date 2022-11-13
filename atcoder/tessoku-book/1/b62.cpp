#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n+1);
  rep(i, m) {
    int a, b; cin >> a >> b;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }

  vector<bool> v(n+1);
  stack<int> res, path;

  auto dfs = [&](auto f, int pos) -> void {
    if (pos == n) {
      res = path;
      return;
    }

    v[pos] = true;
    rep(i, to[pos].size()) {
      int next = to[pos][i];
      if (!v[next]) {
        path.push(next);
        f(f, next);
        path.pop();
      }
    }
    return;
  };

  path.push(1);
  dfs(dfs, 1);

  vector<int> ans;
  while (!res.empty()) {
    ans.emplace_back(res.top());
    res.pop();
  }
  reverse(ans.begin(), ans.end());

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
