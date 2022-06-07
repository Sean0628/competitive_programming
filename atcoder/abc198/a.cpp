#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  set<P> st;

  int ans;
  if (n > 1) {
    rep(i, n) st.insert(make_pair(i, n-i));
    ans = st.size();
  } else ans = 0;

  cout << ans << endl;

  return 0;
}
