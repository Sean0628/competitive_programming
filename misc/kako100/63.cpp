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
  int n; cin >> n;
  vector dist(n, vector<int> (n)), c(n, vector<int> (n));
  rep(i, n) rep(j, n) {
    cin >> c[i][j];
    dist[i][j] = c[i][j];
  }

  // Warshall-Floyd
  rep(k, n) rep(i, n) rep(j, n) {
    if (c[i][j] > c[i][k] + c[k][j]) {
      out(-1);
      return 0;
    }

    if (c[i][j] == c[i][k] + c[k][j] && i != k && j != k) {
      dist[i][j] = 0;
    }
  }

  ll ans = 0;
  rep(i, n) for (int j = i + 1; j < n; ++j) {
    if (dist[i][j] != 0) ans += dist[i][j];
  }

  out(ans);
  return 0;
}
