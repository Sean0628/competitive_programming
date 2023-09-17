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
  int m; cin >> m;
  vector<string> s(3);
  rep(i, 3) cin >> s[i];

  int ans = INF;
  rep(t0, 300) rep(t1, 300) rep(t2, 300) {
    if (t0 == t1) continue;
    if (t0 == t2) continue;
    if (t1 == t2) continue;

    if (s[0][t0%m] != s[1][t1%m]) continue;
    if (s[0][t0%m] != s[2][t2%m]) continue;

    chmin(ans, max({t0, t1, t2}));
  }

  if (ans == INF) ans = -1;
  out(ans);
  return 0;
}
