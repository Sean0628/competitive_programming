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
// 0: left, 1: up, 2: right, 3: down
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  int black = 0;
  rep(i, h) rep(j, w) if (s[i][j] == '#') black++;

  vector<vector<int>> dist(h, vector<int>(w, -1));

  queue<P> que;
  dist[0][0] = 0;
  que.push(P(0, 0));

  while (!que.empty()) {
    auto [x, y] = que.front(); que.pop();

    rep(i, 4) {
      int ni = x + dy[i], nj = y + dx[i];
      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (s[ni][nj] == '#') continue;
      if (dist[ni][nj] != -1) continue;
      dist[ni][nj] = dist[x][y] + 1;
      que.push(P(ni, nj));
    }
  }

  if (dist[h - 1][w - 1] == -1) {
    out(-1);
    return 0;
  }

  int ans = h * w - black - dist[h - 1][w - 1] - 1;
  out(ans);

  return 0;
}
