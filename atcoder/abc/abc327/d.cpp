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
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  rep(i, m) cin >> a[i];
  rep(i, m) cin >> b[i];

  vector<vector<int>> to(n);
  rep(i, m) {
    a[i]--; b[i]--;
    to[a[i]].push_back(b[i]);
    to[b[i]].push_back(a[i]);
  }

  // check for bipartite graph
  vector<int> color(n, -1);
  bool is_bipartite = true;
  rep(i, n) {
    if (color[i] != -1) continue;

    queue<int> q;
    q.push(i);
    color[i] = 0;

    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (auto nv : to[v]) {
        if (color[nv] == -1) {
          color[nv] = color[v] ^ 1;
          q.push(nv);
        } else {
          is_bipartite &= color[nv] != color[v];
        }
      }
    }
  }

  cyn(is_bipartite);

  return 0;
}
