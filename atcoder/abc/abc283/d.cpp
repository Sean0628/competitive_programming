#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  stack<string> st;
  st.push("");
  bool ok = true;
  set<char> cs;
  rep(i, s.size()) {
    if (s[i] == '(') {
      st.push("");
    } else if (s[i] == ')') {
      for (char x : st.top()) {
        cs.erase(x);
      }
      st.pop();
    } else {
      if (cs.count(s[i])) {
        ok = false;
        break;
      }
      cs.insert(s[i]);
      st.top() += s[i];
    }
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
