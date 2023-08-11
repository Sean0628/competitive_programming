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

int main() {
  int n, m; cin >> n >> m;
  vector<int> k(m);
  vector<vector<int>> s(m);
  rep(i, m) {
    cin >> k[i];
    vector<int> tmp(k[i]);
    rep(j, k[i]) { cin >> tmp[j]; tmp[j]--; }
    s[i] = tmp;
  }
  vector<int> p(m);
  rep(i, m) cin >> p[i];

  int ans = 0;
  rep(i, 1<<n) {
    bool ok = true;

    rep(j, m) {
      int cnt = 0;
      rep(l, k[j]) {
        if (i & (1 << (s[j][l]))) cnt++;
      }
      if (cnt % 2 != p[j]) ok = false;
    }
    if (ok) ans++;
  }

  out(ans);
  return 0;
}
