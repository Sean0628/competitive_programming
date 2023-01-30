#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;
const int di[] = { -1, 0, 1, 0 };
const int dj[] = { 0, -1, 0, 1 };

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  vector<vector<int>> sum(h, vector<int> (w));;
  rep(i, h) cin >> s[i];

  int ans = 0;
  rep(si, h) rep(sj, w) {
    if (s[si][sj] == '#') continue;
    vector dist(h, vector<int> (w, INF));
    queue<P> que;

    auto update = [&](int i, int j, int x) {
      if (dist[i][j] != INF) return;
      dist[i][j] = x;
      que.emplace(i, j);
    };

    update(si, sj, 0);

    while(!que.empty()) {
      int i = que.front().first;
      int j = que.front().second; que.pop();

      rep(dir, 4) {
        int ni = i+di[dir], nj = j+dj[dir];

        if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        if (s[ni][nj] == '#') continue;
        update(ni, nj, dist[i][j]+1);
      }
    }

    rep(i, h) rep(j, w) {
      if (dist[i][j] == INF) continue;

      ans = max(ans, dist[i][j]);
    }
  }

  cout << ans << endl;

  return 0;
}
