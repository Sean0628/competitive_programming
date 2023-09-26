#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
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

const ll INF = 1e18;
const int MOD = 10007;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  vector<int> sd(n);
  rep(i, n) {
    if (s[i] == 'J') sd[i] = 0;
    else if (s[i] == 'O') sd[i] = 1;
    else sd[i] = 2;
  }

  // dp[i][j] := i 日目に j で終わるような組み合わせの数
  vector<vector<int>> dp(n, vector<int>(1<<3, 0));
  rep(state, 1<<3) {
    if (((state>>sd[0])&1) && ((state>>0)&1)) dp[0][state] = 1;
  }

  rep(i, n-1) {
    rep(cs, 1<<3) {
      rep(ns, 1<<3) {
        if ((ns>>sd[i+1])&1) {
          if (cs&ns) {
            dp[i+1][ns] += dp[i][cs];
            dp[i+1][ns] %= MOD;
          }
        }
      }
    }
  }

  int ans = 0;
  rep(state, 1<<3) {
    ans += dp[n-1][state];
    ans %= MOD;
  }

  out(ans);

  return 0;
}
