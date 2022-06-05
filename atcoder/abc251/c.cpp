#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  vector<int> t(n);

  rep(i, n) cin >> s[i] >> t[i];

  int b = -1, bs = -1;

  set<string> st;
  rep(i, n) {
    if (st.find(s[i]) != st.end()) continue;
    else {
      st.insert(s[i]);
      if (bs < t[i]) {
        b = i;
        bs = t[i];
      }
    }
  }

  cout << b + 1 << endl;

  return 0;
}
