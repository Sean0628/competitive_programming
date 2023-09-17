#include <vector>
#include <iostream>
#include <queue>
using namespace std;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int w, h;
  // 0: left, 1: up, 2: right, 3: down
  vector<int> dx = {-1, 0, 1, 0};
  vector<int> dy = {0, 1, 0, -1};
  auto solve = [&](int w, int h) {
    vector<vector<vector<int>>> t(h, vector<vector<int>>(w, vector<int>(2, -1)));

    rep(i, h-1) {
      rep(j, w-1) cin >> t[i][j][0];
      rep(j, w) cin >> t[i][j][1];
    }
    rep(j, w-1) cin >> t[h-1][j][0];

    vector<vector<int>> dist(h, vector<int>(w, -1));

    queue<P> q;
    q.push({0, 0});
    dist[0][0] = 1;

    auto isBlocked = [&](int i, int j, int dir) {
      int block = 0;
      if (dir == 0) block = t[i][j-1][0];
      if (dir == 1) block = t[i][j][1];
      if (dir == 2) block = t[i][j][0];
      if (dir == 3) block = t[i-1][j][1];

      return block == 1;
    };

    while (!q.empty()) {
      P p = q.front(); q.pop();
      if (p.first == h-1 && p.second == w-1) {
        cout << dist[p.first][p.second] << endl;
        return;
      }

      rep(i, 4) {
        int ni = p.first + dy[i];
        int nj = p.second + dx[i];
        if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        if (dist[ni][nj] != -1) continue;
        if (isBlocked(p.first, p.second, i)) continue;

        dist[ni][nj] = dist[p.first][p.second] + 1;
        q.push({ni, nj});
      }
    }

    cout << 0 << endl;
  };

  while (cin >> w >> h && w || h) {
    solve(w, h);
  }
  return 0;
}
