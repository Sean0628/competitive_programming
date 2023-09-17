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
  int h, w, n; cin >> h >> w >> n;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  P sp = { 0, 0 };
  vector<P> np(n+1);
  rep(i, h) rep(j, w) {
    if (s[i][j] == 'S') np[0] = { i, j };
    if (s[i][j] != '.' && s[i][j] != 'X') np[s[i][j]-'0'] = { i, j };
  }

  auto bfs = [&](auto self, P sp, P gp) {
    vector<vector<int>> d(h, vector<int>(w, -1));
    d[sp.first][sp.second] = 0;
    queue<P> q;
    q.push(sp);

    vector<int> dx = { 1, 0, -1, 0 };
    vector<int> dy = { 0, 1, 0, -1 };

    while (!q.empty()) {
      auto [i, j] = q.front(); q.pop();

      rep(k, 4) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        if (s[ni][nj] == 'X') continue;
        if (d[ni][nj] != -1) continue;
        d[ni][nj] = d[i][j] + 1;

        if (ni == gp.first && nj == gp.second) break;

        q.push({ ni, nj });
      }
    }

    return d[gp.first][gp.second];
  };

  int tot = 0;
  rep(i, n) {
    tot += bfs(bfs, np[i], np[i+1]);
  }

  out(tot);
  return 0;
}
