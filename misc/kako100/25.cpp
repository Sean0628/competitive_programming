#include <iostream>
#include <vector>
#include <set>
#include <queue>

#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using P = pair<int, int>;

int main() {
  int w, h;
  vector<int> dx = {1, -1, 1, 1, 0, -1, 0, -1};
  vector<int> dy = {1, 1, -1, 0, 1, 0, -1, -1};

  while (cin >> w >> h, w || h) {
    set<P> st;
    queue<P> q;

    vector<vector<int>> c(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> c[i][j];

    vector<vector<bool>> used(h, vector<bool>(w, false));

    auto bfs = [&](auto self, int i, int j) -> void {
      while (!q.empty()) {
        P p = q.front(); q.pop();

        rep(k, 8) {
          int ni = p.first + dx[k];
          int nj = p.second + dy[k];
          if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
          if (c[ni][nj] == 0) continue;
          if (used[ni][nj]) continue;

          used[ni][nj] = true;
          q.push(P(ni, nj));
        }
      }
    };

    int ans = 0;
    rep(i, h) rep(j, w) {
      if (c[i][j] && !used[i][j]) {
        ans++;
        q.push(P(i, j));
        used[i][j] = true;
        bfs(bfs, i, j);
      }
    }

    cout << ans << endl;
  }

  return 0;
}
