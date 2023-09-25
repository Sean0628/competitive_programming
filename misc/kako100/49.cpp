#include <iostream>
#include <vector>

using namespace std;
using P = pair<int, int>;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void chmax(int& a, int b) { a = max(a, b); }
void chmin(int& a, int b) { a = min(a, b); }

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<P>> to(n);

  rep(i, m) {
    int x, y, w; cin >> x >> y >> w;
    to[x].push_back({y, w});
  }

  int ans = INF;
  // dp[i][j] := i の頂点を既に通っていて、現在 j の頂点にいるときの最短距離
  vector<vector<int>> dp(1<<n, vector<int>(n, INF));
  dp[0][0] = 0;

  rep(i, 1<<n) {
    rep(j, n) {
      if (dp[i][j] == INF) continue;

      for (auto p : to[j]) {
        int nj = p.first;
        int nw = p.second;
        if (i & (1<<nj)) continue;

        chmin(dp[i|(1<<nj)][nj], dp[i][j] + nw);
      }
    }
  }

  chmin(ans, dp[(1<<n)-1][0]);

  if (ans == INF) out(-1);
  else out(ans);
  return 0;
}
