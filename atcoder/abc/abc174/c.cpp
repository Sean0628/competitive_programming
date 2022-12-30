#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int k; cin >> k;
  int x = 7%k;
  set<int> st;

  int i = 1;
  while (st.count(x) == 0) {
    if (x == 0) {
      cout << i << endl;
      return 0;
    }

    st.insert(x);
    x = (x*10+7)%k;
    ++i;
  }

  cout << -1 << endl;
  return 0;
}
