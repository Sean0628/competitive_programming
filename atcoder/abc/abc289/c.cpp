#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;

  vector<set<int>> st(m);
  rep(i, m) {
    int c; cin >> c;
    rep(j, c) {
      int e; cin >> e;
      e--;
      st[i].insert(e);
    }
  }

  vector<int> b(n);
  rep(i, n) b[i] = i;

  int ans = 0;
  rep(i, 1<<m) {
    vector<bool> ok(n);

    rep(j, m) {
      if (i&(1<<j)) {
        rep(k, n) {
          if (st[j].count(k)) {
            ok[k] = true;
          }
        }
      }
    }

    bool y = true;
    rep(i, n) {
      if (!ok[i]) y = false;
    }
    if (y) ans++;
  }

  out(ans);
  return 0;
}
