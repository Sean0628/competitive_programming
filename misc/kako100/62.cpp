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
  int m = 10;
  vector dist(m, vector<int>(m, INF));

  rep(i, m) rep(j, m) {
    int c; cin >> c;
    dist[i][j] = c;
  }

  vector a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];

  // Warshall-Floyd
  rep(k, m) {
    rep(i, m) {
      rep(j, m) {
        chmin(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  int ans = 0;

  rep(i, h) rep(j, w) {
    if (a[i][j] == -1) continue;

    ans += dist[a[i][j]][1];
  }

  out(ans);

  return 0;
}
