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
  vector<vector<int>> a(m, vector<int>(n));

  rep(i, m) rep(j, n) cin >> a[i][j];

  set<P> st;
  rep(i, m) {
    rep(j, n-1) {
      st.insert(P(a[i][j], a[i][j+1]));
      st.insert(P(a[i][j+1], a[i][j]));
    }
  }

  ll cnt = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i+1; j <= n; j++) {
      if (st.count(P(i, j)) == 0 && st.count(P(j, i)) == 0) {
        cnt++;
      }
    }
  }

  out(cnt);
  return 0;
}
