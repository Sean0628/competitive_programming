#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> vec(n+1);

  rep(i, m) {
    int a, b; cin >> a >> b;

    vec[a].emplace_back(b);
    vec[b].emplace_back(a);
  }

  for (int i = 1; i <= n; ++i) {
    cout << i << ": {";

    rep(j, vec[i].size()) {
      cout << vec[i][j];
      if (j != vec[i].size()-1) cout << ", ";
    }
    cout << "}" << endl;
  }
  return 0;
}
