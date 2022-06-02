#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  set<string> st;

  rep(i, 4) {
    string tmp;
    cin >> tmp;
    st.insert(tmp);
  }

  cout << ((st.size() == 4) ? "Yes" : "No") << endl;

  return 0;
}
