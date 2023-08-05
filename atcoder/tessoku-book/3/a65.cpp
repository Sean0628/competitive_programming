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

const int INF = 1e9;

int main() {
  int n; cin >> n;
  vector<vector<int>> to(n);
  rep(i, n-1) {
    int a; cin >> a;
    a--;
    to[a].push_back(i+1);
  }

  vector<int> dp(n, 0);

  auto dfs = [&](auto self, int v) -> int {
    if (to[v].size() == 0) return 1;

    for (auto u : to[v]) {
      dp[v] += self(self, u);
    }

    return dp[v] + 1;
  };

  dfs(dfs, 0);

  rep(i, n) cout << dp[i] << " ";
  return 0;
}
