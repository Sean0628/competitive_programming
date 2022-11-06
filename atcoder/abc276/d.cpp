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
  rep(i, n) cin >> a[i];
  vector<int> a2(n), a3(n);
  set<int> st;
  rep(i, n) {
    int x = a[i];
    while (x%2 == 0) x /= 2, a2[i]++;
    while (x%3 == 0) x /= 3, a3[i]++;
    st.insert(x);
  }

  if (st.size() != 1) {
    cout << -1 << endl;
    return 0;
  }

  auto f = [](vector<int> a) {
    int n = a.size();
    int l = INT_MAX;
    rep(i, n) l = min(l, a[i]);
    int res = 0;
    rep(i, n) res += a[i]-l;
    return res;
  };

  int ans = f(a2) + f(a3);
  cout << ans << endl;
  return 0;
}
