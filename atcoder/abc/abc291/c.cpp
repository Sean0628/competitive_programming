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
  int n; cin >> n;
  string s; cin >> s;

  int x = 0;
  int y = 0;
  set<P> st;
  bool ok = false;
  st.insert(P(0, 0));

  rep(i, n) {
    if (s[i] == 'R') {
      P p = make_pair(++x, y);
      if (st.count(p)) {
        ok = true;
        break;
      } else st.insert(p);
    } else if (s[i] == 'L') {
      P p = make_pair(--x, y);
      if (st.count(p)) {
        ok = true;
        break;
      } else st.insert(p);
    } else if (s[i] == 'U') {
      P p = make_pair(x, ++y);
      if (st.count(p)) {
        ok = true;
        break;
      } else st.insert(p);
    } else if (s[i] == 'D') {
      P p = make_pair(x, --y);
      if (st.count(p)) {
        ok = true;
        break;
      } else st.insert(p);
    }

  }

  cyn(ok);
  return 0;
}
