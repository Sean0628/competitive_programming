#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const ll INF = (1LL<<32);

int main() {
  int n, m; cin >> n >> m;
  vector<vector<ll>> dist(n, vector<ll> (n, INF));
  rep(i, n) dist[i][i] = 0;

  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
    dist[a][b] = c;
  }

  // Warshall-Floyd
  rep(k, n) {
    rep(i, n) {
      if (dist[i][k] == INF) continue;

      rep(j, n) {
        if (dist[k][j] == INF) continue;

        chmin(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  // check negative cycle
  rep(i, n) if (dist[i][i] < 0) {
    out("NEGATIVE CYCLE");
    return 0;
  }

  rep(i, n) {
    rep(j, n) {
      if (dist[i][j] == INF) cout << "INF";
      else cout << dist[i][j];
      if (j != n-1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
