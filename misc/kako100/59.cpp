#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define debugv(x) cerr << #x << ": " << endl; for (auto& y : x) cerr << y << " "; cerr << endl;
#define debugvv(x) cerr << #x << ": " << endl; for (auto& y : x) { for (auto& z : y) cerr << z << " "; cerr << endl; }
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;
using PLL = pair<ll, ll>;
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, k; cin >> n >> k;
  vector<int> c(n), r(n);
  rep(i, n) cin >> c[i] >> r[i];

  vector<vector<int>> to(n);
  rep(i, k) {
    int a, b; cin >> a >> b; --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<vector<P>> to2(n);

  rep(i, n) {
    vector<bool> ok(n, false);
    queue<P> q;
    q.push({r[i], i});

    while (!q.empty()) {
      auto [d, v] = q.front(); q.pop();
      if (ok[v]) continue;
      if (d < 0) continue;

      ok[v] = true;
      to2[i].push_back({c[i], v});

      for (auto& nv : to[v]) {
        q.push({d - 1, nv});
      }
    }
  }

  // dijkstra's algorithm
  vector<bool> fixed(n, false);
  vector<int> curr(n, INF);
  priority_queue<P, vector<P>, greater<P>> pq;
  curr[0] = 0;
  pq.push({curr[0], 0});

  while (!pq.empty()) {
    auto [c, v] = pq.top(); pq.pop();
    if (fixed[v]) continue;

    fixed[v] = true;

    for (auto [nc, nv] : to2[v]) {
      if (fixed[nv]) continue;

      if (curr[nv] > curr[v] + nc) {
        curr[nv] = curr[v] + nc;
        pq.push({curr[nv], nv});
      }
    }
  }

  out(curr[n - 1]);

  return 0;
}
