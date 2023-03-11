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
  vector<string> a(h);
  rep(i, h) cin >> a[i];

  vector<bool> bh(h), bw(w);;

  rep(i, h) {
    int cnt = 0;
    rep(j, w) {
      if (a[i][j] == '.') cnt++;
      else cnt = 0;
    }

    if (cnt == w) bh[i] = true;
  }

  rep(j, w) {
    int cnt = 0;
    rep(i, h) {
      if (a[i][j] == '.') cnt++;
      else cnt = 0;
    }

    if (cnt == h) bw[j] = true;
  }

  rep(i, h) {
    if (bh[i]) continue;

    rep(j, w) {
      if (bw[j]) continue;
      cout << a[i][j];
    }

    cout << endl;
  }

  return 0;
}
