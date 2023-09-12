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

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<string> c(n);
  rep(i, n) cin >> c[i];

  mf_graph<int> g(n+24+2);
  rep(i, n) {
    rep(j, 24) {
      if (c[i][j] == '0') continue;

      g.add_edge(i, n+j, 1);
    }
  }

  rep(i, n) g.add_edge(n+24, i, 10);
  rep(j, 24) g.add_edge(n+j, n+25, m);

  cyn(g.flow(n+24, n+25) == m*24);
  return 0;
}
