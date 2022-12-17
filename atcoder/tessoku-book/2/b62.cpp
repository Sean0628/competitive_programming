#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  int a, b;
  vector<vector<int>> to(n+1);
  rep(i, m) {
    cin >> a >> b;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }

  stack<int> res, st;

  vector<bool> v(n+1);

  auto dfs = [&](auto f, int pos) -> void {
    if (pos == n) {
      res = st;
      return;
    }
    v[pos] = true;
    rep(i, to[pos].size()) {
      int next = to[pos][i];
      if (!v[next]) {
        st.push(next);
        f(f, next);
        st.pop();
      }
    }
    return;
  };


  st.push(1);
  dfs(dfs, 1);

  vector<int> ans;
  while (!res.empty()) {
    ans.emplace_back(res.top());
    res.pop();
  }

  reverse(ans.begin(), ans.end());
  for (auto i : ans) cout << i << " ";
  cout << endl;
  return 0;
}
