#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;

  dsu d(n);
  rep(i, q) {
    int c, u, v;
    cin >> c >> u >> v;
    u--; v--;

    if (c == 1) {
      d.merge(u, v);
    } else {
      string ans = "Yes";
      if (!d.same(u, v)) ans = "No";
      cout << ans << endl;
    }
  }
  return 0;
}
