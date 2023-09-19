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

const int MOD = 10000;

int main() {
  int n, k; cin >> n >> k;
  vector<int> menu(n, -1);
  rep(i, k) {
    int a, b; cin >> a >> b;
    menu[a - 1] = b - 1;
  }

  vector dp(n+1, vector<vector<int>>(4, vector<int>(4, 0)));

  rep(i, 3) {
    if (menu[0] == -1 || menu[0] == i) dp[0][i][0] = 1;
  }

  rep(i, n-1) {
    rep(j, 3) {
      rep(k, 2) {
        if (dp[i][j][k] == 0) continue;

        rep(l, 3) {
          if (menu[i + 1] == -1 || menu[i + 1] == l) {
            if (l != j) {
              dp[i + 1][l][0] += dp[i][j][k];
              dp[i + 1][l][0] %= MOD;
            }

            if (l == j && k + 1 < 2) {
              dp[i + 1][l][k + 1] += dp[i][j][k];
              dp[i + 1][l][k + 1] %= MOD;
            }
          }
        }
      }
    }
  }

  int ans = 0;
  rep(i, 3) {
    rep(j, 2) {
      ans += dp[n - 1][i][j];
      ans %= MOD;
    }
  }

  out(ans);
  return 0;
}
