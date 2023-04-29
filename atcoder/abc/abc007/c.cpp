#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int r, c; cin >> r >> c;
  int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;
  --sy; --sx; --gy; --gx;

  vector<string> a(r);
  rep(i, r) cin >> a[i];

  queue<P> que;

  vector<vector<int>> dist(r, vector<int>(c, -1));
  dist[sy][sx] = 0;
  que.push(P(sy, sx));

  vector<int> dx = {1, 0, -1, 0};
  vector<int> dy = {0, 1, 0, -1};

  // bfs
  while (!que.empty()) {
    int y = que.front().first;
    int x = que.front().second;
    que.pop();

    rep(i, 4) {
      int ny = y + dy[i];
      int nx = x + dx[i];

      if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
      if (a[ny][nx] == '#') continue;
      if (dist[ny][nx] != -1) continue;

      dist[ny][nx] = dist[y][x] + 1;
      que.push(P(ny, nx));
    }
  }

  out(dist[gy][gx]);
  return 0;
}
