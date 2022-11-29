#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  priority_queue<int, vector<int>, greater<int>> que;
  int q; cin >> q;
  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      int x; cin >> x;
      que.push(x);
    } else if (c == 2) {
      cout << que.top() << endl;
    } else {
      que.pop();
    }
  }
  return 0;
}
