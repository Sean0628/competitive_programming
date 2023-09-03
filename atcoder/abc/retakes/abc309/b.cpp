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

const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  auto f = [&]() -> vector<string> {
    vector<string> res = s;

    rep(i, n-1) res[0][i+1] = s[0][i];
    rep(i, n-1) res[i+1][n-1] = s[i][n-1];
    rep(i, n-1) res[n-1][n-i-2] = s[n-1][n-i-1];
    rep(i, n-1) res[n-i-2][0] = s[n-i-1][0];

    return res;
  };

  vector<string> ans = f();

  rep(i, n) out(ans[i]);

  return 0;
}
