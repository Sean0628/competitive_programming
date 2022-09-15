#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  vector<int> u, b;
  rep(i, q) {
    int t, x; cin >> t >> x;
    if (t == 1) {
      u.emplace_back(x);
    } else if (t == 2) {
      b.emplace_back(x);
    } else {
      int num;
      if (u.size() < x) {
        num = b[x-u.size()-1];
      } else {
        num = u[u.size()-x];
      }

      cout << num << endl;;
    }
  }
  return 0;
}

