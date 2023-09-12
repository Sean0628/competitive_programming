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
  int n; cin >> n;
  vector<P> p(n);
  set<P> st;
  rep(i, n) {
    int x, y; cin >> x >> y;
    p[i] = {x, y};
    st.insert({x, y});
  }

  int ans = 0;
  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      auto [ax, ay] = p[i];
      auto [bx, by] = p[j];
      int dx = bx - ax;
      int dy = by - ay;

      P c(bx + dy, by - dx);
      P d(ax + dy, ay - dx);

      if (st.count(c) && st.count(d)) {
        chmax(ans, dx*dx + dy*dy);
      }
    }
  }

  out(ans);
  return 0;
}
