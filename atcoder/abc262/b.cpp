#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<bool>> adj(n, vector<bool>(n));
  rep(i, m) {
    int u, v; cin >> u >> v;
    u -= 1, v -= 1;
    adj[u][v] = adj[v][u] = true;
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      for (int k = j + 1; k < n; ++k) {
        if (adj[i][j] && adj[j][k] && adj[k][i]) ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
