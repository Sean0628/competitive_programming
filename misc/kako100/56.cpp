#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, m, s; cin >> n >> m >> s;
  vector<vector<P>> to(n);
  rep(i, m) {
    int u, v, c; cin >> u >> v >> c;
    to[u].push_back({c, v});
  }

  vector<bool> fixed(n);
  vector<ll> curr(n, INF);
  priority_queue<P, vector<P>, greater<P>> q;

  curr[s] = 0;
  q.push({curr[s], s});

  // dijkstra's algorithm
  while (!q.empty()) {
    auto [c, v] = q.top(); q.pop();
    if (fixed[v]) continue;

    fixed[v] = true;

    for (auto [nc, nv] : to[v]) {
      if (fixed[nv]) continue;

      if (curr[nv] > curr[v] + nc) {
        curr[nv] = curr[v] + nc;
        q.push({curr[nv], nv});
      }
    }
  }

  rep(i, n) {
    if (curr[i] == INF) out("INF");
    else out(curr[i]);
  }

  return 0;
}
