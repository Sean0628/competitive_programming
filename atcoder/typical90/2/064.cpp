#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  deque<int> dq;
  rep(i, q) {
    int t, x; cin >> t >> x;

    if (t == 1) {
      dq.push_front(x);
    } else if (t == 2) {
      dq.push_back(x);
    } else {
      cout << dq[x-1] << endl;
    }
  }
  return 0;
}
