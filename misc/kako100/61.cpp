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

int main() {
  int n, m; cin >> n >> m;
  vector dist(n, vector<int>(n, INF));
  rep(i, n) dist[i][i] = 0;

  rep(i, m) {
    int a, b, t; cin >> a >> b >> t; a--; b--;
    dist[a][b] = t;
    dist[b][a] = t;
  }

  rep(k, n) {
    rep(i, n) {
      rep(j, n) {
        chmin(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  int ans = INF;
  rep(i, n) {
    int mx = 0;
    rep(j, n) chmax(mx, dist[i][j]);

    chmin(ans, mx);
  }

  out(ans);

  return 0;
}
