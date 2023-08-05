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
  int n; cin >> n;
  mf_graph <int> g(n*2+2);
  vector<string> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) rep(j, n) {
    if (a[i][j] == '.') continue;

    g.add_edge(i, n+j, 1);
  }

  rep(i, n) {
    g.add_edge(n*2, i, 1);
    g.add_edge(n+i, n*2+1, 1);
  }

  out(g.flow(n*2, n*2+1));

  return 0;
}
