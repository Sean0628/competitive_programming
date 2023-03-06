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
  vector a(h, vector<int> (w));

  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
    }
  }

  vector<P> f, t;
  rep(i, h) {
    rep(j, w) {
      if (a[i][j]%2 != 0) {
        if (i+1 < h) {
          a[i+1][j]++;
          t.emplace_back(i+1, j);

          a[i][j]--;
          f.emplace_back(i, j);
        } else if (j+1 < w) {
          a[i][j+1]++;
          t.emplace_back(i, j+1);

          a[i][j]--;
          f.emplace_back(i, j);
        }
      }
    }
  }

  out(f.size());
  rep(i, f.size()) {
    printf("%d %d %d %d\n", f[i].first+1, f[i].second+1, t[i].first+1, t[i].second+1);
  }
  return 0;
}
