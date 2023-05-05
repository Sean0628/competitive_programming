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
  int n, q; cin >> n >> q;
  vector<vector<int>> g(n);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    --a; --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }


  // BFS
  vector<int> dist(n, -1);
  queue<int> que;
  dist[0] = 0;
  que.push(0);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (int nv : g[v]) {
      if (dist[nv] != -1) continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  rep(i, q) {
    int c, d; cin >> c >> d;
    --c; --d;

    if (dist[c]%2 == dist[d]%2) out("Town");
    else out("Road");
  }


  return 0;
}
