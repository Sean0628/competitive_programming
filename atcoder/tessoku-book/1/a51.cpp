#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  stack<string> st;

  rep(i, q) {
    int n; string s;
    cin >> n;

    if (n == 1) {
      cin >> s;
      st.push(s);
    } else if (n == 2) {
      cout << st.top() << endl;
    } else {
      st.pop();
    }
  }
  return 0;
}
