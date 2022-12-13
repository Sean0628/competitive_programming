#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  map<int, vector<int>> g;
  rep(i, m) {
    cin >> a[i] >> b[i];
    g[a[i]].emplace_back(b[i]);
    g[b[i]].emplace_back(a[i]);
  }

  for (int i = 1; i <= n; ++i) {
    cout << i << ": {";
    if (g[i].size() > 0) {
      rep(j, g[i].size()) {
        cout << g[i][j];
        if (j != g[i].size()-1) cout << ", ";
      }
    }
    cout << "}" << endl;
  }
  return 0;
}
