#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define debugv(x) cerr << #x << ": " << endl; for (auto& y : x) cerr << y << " "; cerr << endl;
#define debugvv(x) cerr << #x << ": " << endl; for (auto& y : x) { for (auto& z : y) cerr << z << " "; cerr << endl; }
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;
using PLL = pair<ll, ll>;
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  // 8 directions
  vector<int> dx = {1, 1, 0, -1, -1, -1, 0, 1};
  vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

  vector<vector<int>> dist(h, vector<int>(w, INF));
  int ans = 0;
  // bfs
  auto bfs = [&](int i, int j) {
    if (s[i][j] == '.') return;
    if (dist[i][j] != INF) return;

    queue<P> q;
    q.push({i, j});
    dist[i][j] = 0;

    while (!q.empty()) {
      auto [x, y] = q.front(); q.pop();

      rep(k, 8) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (s[nx][ny] == '.') continue;
        if (dist[nx][ny] != INF) continue;
        dist[nx][ny] = dist[x][y] + 1;
        q.push({nx, ny});
      }
    }

    ans++;
  };

  rep(i, h) rep(j, w) bfs(i, j);

  out(ans);
  return 0;
}
