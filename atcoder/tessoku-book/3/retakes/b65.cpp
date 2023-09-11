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
  int n, t; cin >> n >> t;
  t--;
  vector<vector<int>> to(n);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> grade(n, INF);

  auto dfs = [&](auto self, int v, int p) -> int {
    int res = 0;
    for (int u : to[v]) {
      if (u == p) continue;

      chmax(res, self(self, u, v) + 1);
    }

    return grade[v] = res;
  };

  dfs(dfs, t, -1);

  rep(i, n) out(grade[i]);
  return 0;
}
