#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  set<string> st;
  vector<bool> dup(n);
  rep(i, n) {
    string s; cin >> s;
    if (st.count(s)) dup[i] = true;
    st.insert(s);
  }

  rep(i, n) {
    if (dup[i]) continue;

    cout << i+1 << endl;
  }
  return 0;
}
