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
void cyn(bool x) { cout << (x ? "Takahashi" : "Aoki") << endl; }

int main() {
  int h, w; cin >> h >> w;
  vector<string> c(h);

  rep(i, h) cin >> c[i];

  queue<P> q;
  vector dist(h, vector<int>(w, -1));
  q.push({0, 0});
  dist[0][0] = 1;

  vector<int> dx = { 0, 1 };
  vector<int> dy = { 1, 0 };
  // bfs
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    rep(i, 2) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (c[nx][ny] == '#') continue;
      if (dist[nx][ny] != -1) continue;

      dist[nx][ny] = dist[x][y] + 1;
      q.push({nx, ny});
    }
  }

  int mx = 0;
  rep(i, h) rep(j, w) {
    if (dist[i][j] == -1) continue;
    chmax(mx, dist[i][j]);
  }
  out(mx);

  return 0;
}
