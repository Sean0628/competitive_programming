#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  set<int> st, stn;
  rep(i, q) {
    int c, x; cin >> c >> x;

    if (c == 1) {
      st.insert(x);
      stn.insert(-x);
    } else if (c == 2) {
      auto ita = st.lower_bound(x);
      int a = INT_MAX;
      if (ita != st.end()) a = *ita - x;

      auto itb = stn.lower_bound(-x);
      int b = INT_MAX;
      if (itb != stn.end()) b = x + *itb;
      int ans = min(a, b);

      if (ans == INT_MAX) ans = -1;

      cout << ans << endl;
    }
  }
  return 0;
}
