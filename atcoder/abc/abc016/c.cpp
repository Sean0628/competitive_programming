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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector g(n, vector<int>());

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }


  rep(i, n) {
    set<int> s;
    set<int> fr;
    for (auto v : g[i]) fr.insert(v);

    for (auto v : g[i]) {
      for (auto u : g[v]) {
        if (u == i) continue;
        if (fr.count(u)) continue;

        s.insert(u);
      }
    }
    out(s.size());
  }


  return 0;
}
