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
  int n, m, k; cin >> n >> m >> k;
  vector<vector<int>> to(n);
  rep(i, m) {
    int a, b; cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> d(n, -1);

  priority_queue<P> que;
  rep(i, k) {
    int p, h; cin >> p >> h;
    --p;
    d[p] = h;
    que.push(P(h, p));
  }

  // dijkstra's
  while (!que.empty()) {
    auto [h, v] = que.top(); que.pop();
    if (d[v] != h) continue;

    for (auto nv : to[v]) {
      if (d[nv] >= h-1) continue;
      d[nv] = h-1;
      que.push(P(h-1, nv));
    }
  }

  vector<int> ans;
  rep(i, n) if (d[i] >= 0) ans.push_back(i+1);

  out(ans.size());
  for (auto x : ans) cout << x << " ";
  cout << endl;
  return 0;
}
