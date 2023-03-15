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
  rep(i, h) {
    cin >> a[i];
  }

  vector<P> o = { P(-1, 0), P(0, 1), P(0, -1), P(1, 0) };
  auto f = [&](int i, int j) {
    bool res = false;
    rep(k, 4) {
      int ii = i + o[k].first;
      int ji = j + o[k].second;
      if (0 <= ii && ii < h && 0 <= ji && ji < w) {
        if (a[ii][ji] == '#') res = true;
      }
    }

    return res;
  };

  bool ok = true;
  rep(i, h) {
    rep(j, w) {
      if (a[i][j] != '#') continue;

      if (!f(i, j)) {
        ok = false;
        break;
      }
    }
  }

  cyn(ok);
  return 0;
}
