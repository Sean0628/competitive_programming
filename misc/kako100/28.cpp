#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<vector<int>> to(n);

  rep(i, n) {
    int v, k; cin >> v >> k;
    v--;
    rep(j, k) {
      int u; cin >> u;
      u--;
      to[i].push_back(u);
    }
  }

  vector<int> dist(n, -1);
  queue<int> q;
  dist[0] = 0;
  q.push(0);

  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int u : to[v]) {
      if (dist[u] != -1) continue;

      dist[u] = dist[v] + 1;
      q.push(u);
    }
  }

  rep(i, n) {
    cout << i+1 << " " << dist[i] << endl;
  }

  return 0;
}
