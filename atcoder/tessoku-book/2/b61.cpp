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
  vector<vector<int>> g(n+1);

  rep(i, m) {
    cin >> a[i] >> b[i];
    g[a[i]].emplace_back(b[i]);
    g[b[i]].emplace_back(a[i]);
  }

  int ans = 0, idx = 0;
  rep(i, n+1) {
    if (ans < g[i].size()) {
      ans = g[i].size();
      idx = i;
    }
  }
  cout << idx << endl;
  return 0;
}
