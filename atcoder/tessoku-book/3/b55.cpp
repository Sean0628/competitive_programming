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
  int q; cin >> q;
  set<int> st;
  rep(i, q) {
    int c, x; cin >> c >> x;
    if (c == 1) {
      st.insert(x);
    } else {
      if (st.size() == 0) { out(-1); continue; }

      auto it1 = st.lower_bound(x);
      auto it2 = st.upper_bound(x);

      if (it1 == st.begin()) {
        out(*it1-x);
      } else if (it1 == st.end()) {
        out(x-*prev(it1));
      } else {
        if (abs(*it1-x) < abs(*prev(it1)-x)) out(*it1-x);
        else out(x-*prev(it1));
      }
    }
  }
  return 0;
}
