#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<string> s(n);

  rep(i, n) cin >> s[i];
  set<string> st;
  rep(i, m) {
    string t; cin >> t;
    st.insert(t);
  }

  rep(i, n) {
    if (st.count(s[i])) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
