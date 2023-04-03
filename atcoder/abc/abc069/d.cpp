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
  int h, w; cin >> h >> w;
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<vector<int>> ans(h, vector<int>(w));

  rep(i, n) {
    int cnt = a[i];
    rep(j, h) {
      rep(k, w) {
        if (ans[j][k] != 0) continue;
        if (cnt == 0) break;
        ans[j][k] = i + 1;
        cnt--;
      }
      if (cnt == 0) break;
    }
  }

  rep(i, h) {
    if (i % 2 == 1) {
      reverse(ans[i].begin(), ans[i].end());
    }
  }

  rep(i, h) {
    rep(j, w) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}
