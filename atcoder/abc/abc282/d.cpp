#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll c2(ll n) {
  return n*(n-1)/2;

}

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);
  rep(i, m) {
    int a, b; cin >> a >> b;
    --a, --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  vector<int> c(n, -1);
  vector<int> cvs(2);
  auto dfs = [&](auto f, int v, int nc=0) -> bool {
    if (c[v] != -1) return c[v] == nc;
    c[v] = nc;
    cvs[nc]++;
    for (int u : to[v]) {
      if (!f(f, u, !nc)) return false;
    }
    return true;
  };

  ll ans = c2(n)-m;

  rep(i, n) {
    if (c[i] != -1) continue;
    cvs = vector<int>(2);
    if (!dfs(dfs, i)) {
      cout << 0 << endl;
      return 0;
    }

    for (int s : cvs) ans -= c2(s);
  }

  cout << ans << endl;
  return 0;
}
