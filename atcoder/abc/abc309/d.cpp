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
  int n1, n2, m; cin >> n1 >> n2 >> m;
  ll n = n1 + n2;
  vector<vector<int>> g(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  auto bfs = [&](int s) {
    vector<int> dist(n, -1);
    queue<int> q;
    dist[s] = 0;
    q.push(s);
    while (!q.empty()) {
      int v = q.front(); q.pop();
      for (int nv : g[v]) {
        if (dist[nv] != -1) continue;
        dist[nv] = dist[v] + 1;
        q.push(nv);
      }
    }
    return dist;
  };

  auto dist1 = bfs(0);
  auto dist2 = bfs(n-1);

  ll ans = *max_element(dist1.begin(), dist1.end());
  ans += *max_element(dist2.begin(), dist2.end());
  ans++;

  out(ans);

  return 0;
}
