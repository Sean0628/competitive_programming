#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const ll INF = 1e18;

struct Edge {
  int to;
  ll cost, time;
  Edge(int to, ll cost, ll time) : to(to), cost(cost), time(time) {}
};

int main() {
  int n, m; cin >> n >> m;
  vector<int> s(m), t(m);
  vector<ll> d(m), time(m);
  vector<vector<Edge>> to(n);
  rep(i, m) {
    cin >> s[i] >> t[i] >> d[i] >> time[i];
    --s[i]; --t[i];
    to[s[i]].emplace_back(t[i], d[i], time[i]);
    to[t[i]].emplace_back(s[i], d[i], time[i]);
  }

  // dp[i][j] := i の頂点を既に通っていて、現在 j の頂点にいるときの最短距離
  vector dp(1<<n, vector<pair<ll, ll>> (n, {INF, 0}));
  dp[0][0] = {0, 1};

  rep(i, 1<<n) {
    rep(j, n) {
      auto [dist, cnt] = dp[i][j];
      if (dist == INF) continue;

      for (auto e : to[j]) {
        int nj = e.to;
        ll ndist = dist + e.cost;
        if (i>>nj&1) continue;
        if (ndist > e.time) continue;

        if (ndist == dp[i|(1<<nj)][nj].first) {
          dp[i|(1<<nj)][nj].second += cnt;
        } else if (ndist < dp[i|(1<<nj)][nj].first) {
          dp[i|(1<<nj)][nj] = {ndist, cnt};
        }
      }
    }
  }

  auto [mx, cnt] = dp[(1<<n)-1][0];
  if (mx == INF) out("IMPOSSIBLE");
  else printf("%lld %lld\n", mx, cnt);

  return 0;
}
