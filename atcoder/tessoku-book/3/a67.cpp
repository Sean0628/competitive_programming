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
  vector<pair<int, P>> to;
  dsu d(n);

  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
    a--; b--;
    to.push_back({c, {a, b}});
  }

  // kruskal's algorithm
  sort(to.begin(), to.end());

  ll ans = 0;

  rep(i, m) {
    int c = to[i].first;
    int a = to[i].second.first;
    int b = to[i].second.second;

    if (d.same(a, b)) continue;

    ans += c;
    d.merge(a, b);
  }

  out(ans);

  return 0;
}
