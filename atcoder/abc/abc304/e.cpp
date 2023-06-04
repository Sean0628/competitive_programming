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

int main() {
  int n, m; cin >> n >> m;
  dsu uf(n);
  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    uf.merge(a, b);
  }

  int k; cin >> k;
  set<P> s;
  rep(i, k) {
    int c, d; cin >> c >> d;
    c--; d--;
    int x = uf.leader(c);
    int y = uf.leader(d);
    s.insert(P(x, y));
    s.insert(P(y, x));
  }

  int q; cin >> q;

  rep(i, q) {
    int e, f; cin >> e >> f;
    e--; f--;
    bool ok = true;
    int x = uf.leader(e);
    int y = uf.leader(f);
    if (s.count(P(x, y)) || s.count(P(y, x))) ok = false;
    cyn(ok);
  }
  return 0;
}
