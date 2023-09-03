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

const ll INF = 1e18;

int main() {
  int n1, n2, m; cin >> n1 >> n2 >> m;
  int n = n1 + n2;
  vector<vector<int>> to(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    --a; --b;

    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<ll> dist(n, INF);
  dist[0] = 0;
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v] + 1;
      q.push(u);
    }
  }

  dist[n-1] = 0;
  q.push(n-1);
  while (!q.empty()) {
    int v = q.front(); q.pop();
    for (int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v] + 1;
      q.push(u);
    }
  }

  int d1 = 0, d2 = 0;
  rep(i, n1) chmax(d1, dist[i]);
  for (int i = n1; i < n; i++) chmax(d2, dist[i]);

  int ans = d1 + d2 + 1;

  out(ans);

  return 0;
}
