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
  vector<int> a(m), b(m), c(m);
  vector<P> d(m);
  rep(i, m) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--, b[i]--;
    d[i] = P(c[i], i);
  }

  sort(d.rbegin(), d.rend());
  dsu uf(n);
  int ans = 0;
  for (auto [c, i] : d) {
    if (uf.same(a[i], b[i])) continue;
    uf.merge(a[i], b[i]);
    ans += c;
  }

  out(ans);

  return 0;
}
