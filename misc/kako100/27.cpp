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

  vector<int> dx = {1, -1, 0, 0};
  vector<int> dy = {0, 0, 1, -1};
  int ans = 0;
  auto f = [&](auto f, int i, int j, set<P> st, int cnt) -> void {
    st.insert(P(i, j));

    rep(k, 4) {
      int ni = i + dx[k];
      int nj = j + dy[k];
      if (ni < 0 || ni >= m || nj < 0 || nj >= n) continue;
      if (a[ni][nj] == 0) continue;
      if (st.count(P(ni, nj))) continue;

      chmax(ans, cnt+1);
      f(f, ni, nj, st, cnt+1);
    }
  };

  rep(i, m) rep(j, n) {
    if (a[i][j] == 0) continue;

    set<P> st;
    f(f, i, j, st, 1);
  }

  out(ans);
  return 0;
}
