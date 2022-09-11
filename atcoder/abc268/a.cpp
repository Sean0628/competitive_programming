#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> n(5);
  int a, b, c, d, e; cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
  set<int> st;

  rep(i, 5) st.insert(n[i]);

  cout << st.size() << endl;
  return 0;
}
