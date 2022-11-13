#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<bool> ans(n);
  set<string> st;
  rep(i, n) {
    bool ok = false;
    if (s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S') {
      if (s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' || s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6'|| s[i][1] == '7' || s[i][1] == '8'|| s[i][1] == '9'|| s[i][1] == 'T'|| s[i][1] == 'J'|| s[i][1] == 'Q'|| s[i][1] == 'K') {
        if (st.find(s[i]) == st.end()) {
          st.insert(s[i]);
          ok = true;
        }
      }
    }

    if (ok) ans[i] = true;
  }

  rep(i, n) {
    if (!ans[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
