#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  set<string> st;

  rep(i, n) {
    string tmp; cin >> tmp;
    st.insert(tmp);
  }

  cout << st.size() << endl;
  return 0;
}