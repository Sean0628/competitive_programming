#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  multiset<int> mst;

  while (q--) {
    int t; cin >> t;

    if (t == 1) {
      int x; cin >> x;
      mst.insert(x);
    } else if (t == 2) {
      int x, c; cin >> x >> c;
      while (c-- && mst.find(x) != mst.end()) {
        mst.erase(mst.find(x));
      }
    } else cout << *mst.rbegin() - *mst.begin() << endl;
  }

  return 0;
}
