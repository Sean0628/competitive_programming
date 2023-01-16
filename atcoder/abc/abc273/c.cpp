#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b;
  rep(i, n) cin >> a[i];

  set<int> st;
  rep(i, n) {
    if (st.count(a[i])) continue;

    st.insert(a[i]);
    b.emplace_back(a[i]);
  }

  sort(b.begin(), b.end());

  vector<int> ans(n);
  rep(i, n) {
    int pos = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
    ans[b.size() - pos]++;
  }

  rep(i, n) cout << ans[i] << endl;
  return 0;
}
