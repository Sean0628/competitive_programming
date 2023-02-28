#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint998244353;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);
  vector<int> deg(n);
  rep(i, m) {
    int a, b; cin >> a >> b;
    a--, b--;
    to[b].emplace_back(a);
    deg[a]++;
  }

  queue<int> q;
  rep(i, n) if (deg[i] == 0) q.push(i);
  vector<int> A(n);
  int na = n;

  bool ok = true;
  while (q.size()) {
    if (q.size() > 1) {
      ok = false;
      break;
    }

    int v = q.front(); q.pop();
    A[v] = na; na--;
    for (int u : to[v]) {
      deg[u]--;
      if (deg[u] == 0) q.push(u);
    }
  }

  cyn(ok);
  if (ok) rep(i, n) cout << A[i] << " ";
  return 0;
}
