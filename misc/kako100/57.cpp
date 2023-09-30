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
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, k; cin >> n >> k;
  vector<vector<P>> to(n);

  int c, u, v, cost;
  while (k > 0) {
    cin >> c;

    if (c == 0) {
      // order
      cin >> u >> v;
      u--; v--;

      priority_queue<P, vector<P>, greater<P>> q;
      vector<bool> fixed(n, false);
      vector<int> curr(n, INF);
      curr[u] = 0;
      q.push({curr[u], u});

      while (!q.empty()) {
        auto [ct, cv] = q.top(); q.pop();
        if (fixed[cv]) continue;
        fixed[cv] = true;

        for (auto [nct, nv] : to[cv]) {
          if (fixed[nv]) continue;

          if (curr[nv] > curr[cv] + nct) {
            curr[nv] = curr[cv] + nct;
            q.push({curr[nv], nv});
          }
        }
      }

      if (curr[v] == INF) out(-1);
      else out(curr[v]);
    } else {
      cin >> u >> v >> cost;
      u--; v--;

      to[u].push_back({cost, v});
      to[v].push_back({cost, u});
    }

    k--;
  }
  return 0;
}
