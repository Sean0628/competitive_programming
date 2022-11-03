#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  set<int> st;
  rep(i, q) {
    int c, x; cin >> c >> x;

    if (c == 1) {
      st.insert(x);
    } else if (c == 2) {
      st.erase(x);
    } else {
      auto iter = st.lower_bound(x);
      int ans;

      if (iter == st.end()) ans = -1;
      else ans = *iter;
      cout << ans << endl;
    }
  }
  return 0;
}
