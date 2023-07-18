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
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector dist(h, vector<bool>(w, false));

  map<char, char> next;
  next['s'] = 'n';
  next['n'] = 'u';
  next['u'] = 'k';
  next['k'] = 'e';
  next['e'] = 's';

  auto bfs = [&](int i, int j) {
    queue<P> q;
    q.push({i, j});
    dist[i][j] = true;

    vector<int> dx = { -1, 0, 1, 0 };
    vector<int> dy = { 0, 1, 0, -1 };
    while (!q.empty()) {
      auto [x, y] = q.front(); q.pop();

      rep(k, 4) {
        int nx = x + dx[k], ny = y + dy[k];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (dist[nx][ny]) continue;
        if (s[nx][ny] != next[s[x][y]]) continue;
        dist[nx][ny] = true;
        q.push({nx, ny});
      }
    }
  };

  bfs(0, 0);

  cyn(dist[h-1][w-1] == 1);
  return 0;
}
