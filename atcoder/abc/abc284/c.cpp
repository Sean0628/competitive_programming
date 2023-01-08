#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  dsu d(n);
  rep(i, m) {
    int u, v; cin >> u >> v;
    u--, v--;
    d.merge(u, v);
  }

  cout << d.groups().size() << endl;
  return 0;
}
