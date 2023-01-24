#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

bool dp[2501][10101];

int main() {
  int n, x; cin >> n >> x;
  vector<int> c;
  rep(i, n) {
    int a, b; cin >> a >> b;
    rep(j, b) c.emplace_back(a);
  }

  int m = c.size();
  dp[0][0] = true;
  rep(i, m) {
    rep(j, x+1) {
      if (!dp[i][j]) continue;
      dp[i+1][j] = true;
      dp[i+1][j+c[i]] = true;
    }
  }

  if (dp[m][x]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
