#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  map<int, vector<int>> mp;

  rep(i, n) {
    int a, b; cin >> a >> b;
    mp[a].emplace_back(b);
    mp[b].emplace_back(a);
  }

  map<int, bool> v;

  int ans = 1;;
  auto dfs = [&](auto f, int pos) -> void {
    v[pos] = true;
    ans = max(ans, pos);

    rep(i, mp[pos].size()) {
      int next = mp[pos][i];
      if (!v[next]) f(f, next);
    }
  };

  dfs(dfs, 1);

  cout << ans << endl;
  return 0;
}
