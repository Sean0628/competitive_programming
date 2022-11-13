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

  stack<P> st;

  rep(i, n) {
    if (n >= 1) {
      st.push(make_pair(i, a[i-1]));

      while (!st.empty()) {
        int p = st.top().second;
          if (p <= a[i]) st.pop();
          else break;
      }
    }

    int ans = -1;
    if (!st.empty()) ans = st.top().first;
    cout << ans << " ";
  }
  cout << endl;
  return 0;
}
