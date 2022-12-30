#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);

  unordered_set<int> st;
  rep(i, n) {
    cin >> a[i];
    st.insert(a[i]);
  }

  int ans = 0, s = 0;
  for (int i = 1;; ++i) {
    if (st.count(i)) s += 1; else s += 2;
    if (s > n) break;
    ans = i;
  }

  cout << ans << endl;
  return 0;
}
