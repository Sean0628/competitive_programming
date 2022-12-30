#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  set<string> st;
  rep(i, n) {
    string s; cin >> s;
    st.insert(s);
  }

  for (auto s : st) {
    if (s[0] != '!') {
      if (st.find('!' + s) == st.end()) continue;
      else {
        cout << s << endl;
        return 0;
      }
    } else {
      if (st.find(s.substr(1)) == st.end()) continue;
      else {
        cout << s.substr(1) << endl;
        return 0;
      }
    }
  }

  cout << "satisfiable" << endl;


  return 0;
}
