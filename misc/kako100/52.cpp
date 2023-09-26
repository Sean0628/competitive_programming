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
  int n, m; cin >> n >> m;
  vector<int> d(n);
  vector<vector<int>> sum(m, vector<int> (n+1, 0));
  map<int, int> mp;
  rep(i, n) {
    cin >> d[i]; d[i]--;
    sum[d[i]][i+1]++;
    mp[d[i]]++;
  }

  rep(i, m) rep(j, n) sum[i][j+1] += sum[i][j];

  // dp[i] := 配置に使った種類の集合が i の時そこまでの最小値
  vector<int> dp(1<<m, INF);
  dp[0] = 0;
  rep(i, 1<<m) {
    int pos = 0;

    rep(j, m) if (i & (1<<j)) pos += mp[j];
    rep(j, m) {
      if (i & (1<<j)) continue;
      int nxt = i | (1<<j);
      chmin(dp[nxt], dp[i] + mp[j] - (sum[j][pos+mp[j]] - sum[j][pos]));
    }
  }

  out(dp[(1<<m)-1]);
  return 0;
}
