#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  set<P> st;
  vector<P> ps;
  rep(i, 9) {
    string s; cin >> s;
    rep(j, 9) {
      if (s[j] == '#') {
        st.emplace(i, j);
        ps.emplace_back(i, j);
      }
    }
  }

  int n = ps.size();
  int ans = 0;
  rep(ai, n) rep(bi, n) if (ai != bi) {
    P a = ps[ai], b = ps[bi];

    int di = b.first - a.first;
    int dj = b.second - a.second;

    P c(b.first-dj, b.second+di);
    P d(c.first-di, c.second-dj);

    if (st.count(c) && st.count(d)) ans++;
  }

  ans /= 4;
  cout << ans << endl;

  return 0;
}
