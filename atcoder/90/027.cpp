#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  set<string> st;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  rep(i, n) {
    if (st.count(s[i]) == 0) cout << i+1 << endl;

    st.insert(s[i]);
  }
  return 0;
}
