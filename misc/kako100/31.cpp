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
  int w, h; cin >> w >> h;
  vector<vector<int>> a(w+2, vector<int> (h+2));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) cin >> a[j][i];
  }

  // hexagonal grid
  vector<int> evenDx = { 0, 1, 0, -1, -1, -1 };
  vector<int> evenDy = { -1, 0, 1, 1, 0, -1 };
  vector<int> oddDx = { 1, 1, 1, 0, -1, 0 };
  vector<int> oddDy = { -1, 0, 1, 1, 0, -1 };

  vector<vector<int>> d(w+2, vector<int> (h+2, -1));

  int ans = 0;
  auto bfs = [&](P s) {
    queue<P> q;
    q.push(s);

    while (!q.empty()) {
      auto [i, j] = q.front(); q.pop();
      if (d[i][j] != -1) continue;
      d[i][j] = 1;

      rep(k, 6) {
        int ni = (j % 2 == 0) ? i + evenDx[k] : i + oddDx[k];
        int nj = (j % 2 == 0) ? j + evenDy[k] : j + oddDy[k];

        if (ni < 0 || ni > w+1 || nj < 0 || nj > h+1) continue;
        if (d[ni][nj] != -1) continue;
        if (a[ni][nj] == 1) { ans++; continue; }

        q.push(P(ni, nj));
      }
    }
  };

  bfs(P(0, 0));

  out(ans);
  return 0;
}
