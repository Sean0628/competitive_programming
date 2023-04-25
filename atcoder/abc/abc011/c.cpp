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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(3);

  set<int> st;
  rep(i, 3) {
    int x; cin >> x;
    st.insert(x);
  }

  vector<int> dp(n+1, 1e9);

  dp[0] = 0;

  rep(i, n) {
    if (dp[i] == 1e9) continue;

    for (int j = 1; j <= 3; ++j) {
      if (i+j > n) continue;
      if (st.count(i+j)) continue;

      dp[i+j] = min(dp[i+j], dp[i] + 1);
    }
  }

  if (dp[n] > 100) out("NO");
  else out("YES");

  return 0;
}
