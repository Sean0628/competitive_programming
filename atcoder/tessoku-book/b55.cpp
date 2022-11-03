#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

auto getItr(ll x, set<int> st) {
  auto itr = st.lower_bound(x);
  return itr;
}

int main() {
  int q; cin >> q;
  set<int> st1, st2;
  rep(i, q) {
    int c, x; cin >> c >> x;

    if (c == 1) {
      st1.insert(x);
      st2.insert(-x);
    } else {
      auto uitr = st1.lower_bound(x);
      int uv = INT_MAX;
      if (uitr != st1.end()) uv = *uitr - x;

      auto litr = st2.lower_bound(-x);
      int lv = INT_MAX;
      if (litr != st2.end()) lv = x + *litr;
      int ans = min(lv, uv);

      if (ans == INT_MAX) ans = -1;

      cout << ans << endl;
    }
  }
  return 0;
}
