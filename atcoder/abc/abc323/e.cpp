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
using mint = modint998244353;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, x; cin >> n >> x;
  vector<int> t(n); rep(i, n) cin >> t[i];
  vector<mint> dp(x+1, 0);
  dp[0] = 1;
  mint p = mint(1)/n;
  rep(i, x+1) {
    rep(j, n) {
      int ni = i + t[j];
      if (ni <= x) dp[ni] += dp[i] * p;
    }
  }

  mint ans;
  rep(i, x+1) {
    if (i+t[0] > x) ans += dp[i] * p;
  }

  out(ans.val());
  return 0;
}
