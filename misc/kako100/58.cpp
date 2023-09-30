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

const ll INF = 1e18;

int main() {
  int n, m, k, s; cin >> n >> m >> k >> s;
  int p, q; cin >> p >> q;

  set<int> ng;
  queue<PLL> qi;
  vector<int> c(k);
  rep(i, k) {
    cin >> c[i];
    --c[i];
    ng.insert(c[i]);
    qi.push({s, c[i]});
  }

  vector<vector<int>> to(n);
  rep(i, m) {
    int u, v; cin >> u >> v;
    --u; --v;

    to[u].push_back(v);
    to[v].push_back(u);
  }

  vector<bool> danger(n, false);

  while (!qi.empty()) {
    auto [d, v] = qi.front(); qi.pop();
    if (danger[v]) continue;
    danger[v] = true;

    if (d == 0) continue;

    for (int nv : to[v]) {
      qi.push({d-1, nv});
    }
  }

  vector<bool> fixed(n, false);
  vector<ll> curr(n, INF);
  priority_queue<PLL, vector<PLL>, greater<PLL>> que;

  curr[0] = 0;
  que.push({curr[0], 0});

  while (!que.empty()) {
    auto [c, v] = que.top(); que.pop();

    if (fixed[v]) continue;
    fixed[v] = true;

    for (int nv : to[v]) {
      if (fixed[nv]) continue;
      if (ng.count(nv)) continue;
      int cost = danger[nv] ? q : p;

      if (nv == n - 1) chmin(cost, 0);

      if (curr[nv] > curr[v] + cost) {
        curr[nv] = curr[v] + cost;
        que.push({curr[nv], nv});
      }
    }
  }

  ll ans = curr[n - 1];
  out(curr[n - 1]);
  return 0;
}
