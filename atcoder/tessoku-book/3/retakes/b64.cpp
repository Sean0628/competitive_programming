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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<P>> to(n);
  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
    a--; b--;
    to[a].push_back({c, b});
    to[b].push_back({c, a});
  }

  vector<bool> fixed(n, false);
  vector<int> curr(n, INF);
  priority_queue<P, vector<P>, greater<P>> q;

  curr[0] = 0;
  q.push({curr[0], 0});

  while (!q.empty()) {
    auto [c, v] = q.top(); q.pop();
    if (fixed[v]) continue;

    fixed[v] = true;

    for (auto [nc, nv] : to[v]) {
      int cost = c + nc;
      if (curr[nv] > cost) {
        curr[nv] = cost;
        q.push({curr[nv], nv});
      }
    }
  }

  // restoration
  vector<int> ans;
  int pos = n-1;

  while (pos >= 0) {
    ans.push_back(pos+1);
    if (pos == 0) break;

    for (auto [nc, nv] : to[pos]) {
      if (curr[pos] == curr[nv] + nc) {
        pos = nv;
        break;
      }
    }
  }

  reverse(ans.begin(), ans.end());

  rep(i, ans.size()) out(ans[i]);

  return 0;
}
