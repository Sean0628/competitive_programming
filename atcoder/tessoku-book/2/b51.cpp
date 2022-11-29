#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  stack<int> st;

  rep(i, s.size()) {
    if (s[i] == '(') st.push(i+1);
    else {
      cout << st.top() << " " << i+1 << endl;
      st.pop();
    }
  }
  return 0;
}
