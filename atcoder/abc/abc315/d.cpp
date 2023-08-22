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
  int h, w; cin >> h >> w;
  vector<string> c(h);
  rep(i, h) cin >> c[i];
  vector a(h, vector<int> (w));
  rep(i, h) rep(j, w) a[i][j] = c[i][j] - 'a';

  const int m = 26;
  vector row(h, vector<int> (m));
  vector col(w, vector<int> (m));
  rep(i, h) rep(j, w) {
    row[i][a[i][j]]++;
    col[j][a[i][j]]++;
  }

  vector<bool> del_row(h, false);
  vector<bool> del_col(w, false);

  auto toDelete = [&](vector<int> x) {
    int tot = 0, k = 0;
    rep(j, m) {
      tot += x[j];
      if (x[j]) k++;
    }

    return tot >= 2 && k == 1;
  };

  auto del = [&](int i, int j) {
    if (del_row[i] || del_col[j]) return;

    row[i][a[i][j]]--;
    col[j][a[i][j]]--;
  };

  bool upd = true;
  while (upd) {
    upd = false;
    vector<int> del_row_idx, del_col_idx;
    rep(i, h) {
      if (del_row[i]) continue;
      if (toDelete(row[i])) del_row_idx.push_back(i);
    }
    rep(j, w) {
      if (del_col[j]) continue;
      if (toDelete(col[j])) del_col_idx.push_back(j);
    }

    for (int i : del_row_idx) {
      rep(j, w) del(i, j);
      del_row[i] = true;
      upd = true;
    }

    for (int j : del_col_idx) {
      rep(i, h) del(i, j);
      del_col[j] = true;
      upd = true;
    }
  }

  int ans = 0;
  rep(i, h) rep(j, w) {
    if (del_row[i] || del_col[j]) continue;
    ans++;
  }

  out(ans);

  return 0;
}
