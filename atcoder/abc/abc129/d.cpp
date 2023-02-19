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
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector cnt(h, vector<int> (w));

  rep(i, h) {
    vector<int> done(w);
    rep(j, w) {
      if (s[i][j] == '#') continue;
      if (done[j]) continue;

      int l = 0;
      while (j+l < w) {
        if (s[i][j+l] == '#') break;
        ++l;
      }

      rep(k, l) {
        cnt[i][j+k] += l;
        done[j+k] = 1;
      }
    }
  }

  rep(j, w) {
    vector<int> done(h);
    rep(i, h) {
      if (s[i][j] == '#') continue;
      if (done[i]) continue;

      int l = 0;
      while (i+l < h) {
        if (s[i+l][j] == '#') break;
        ++l;
      }

      rep(k, l) {
        cnt[i+k][j] += l;
        done[i+k] = 1;
      }
    }
  }

  int ans = 0;
  rep(i, h) rep(j, w) ans = max(ans, cnt[i][j]-1);
  out(ans);

  return 0;
}
