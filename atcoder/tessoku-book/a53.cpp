#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  priority_queue<int, vector<int>, greater<int>> que;

  int c, n;
  rep(i, q) {
    cin >> c;
    if (c == 1) {
      cin >> n;
      que.push(n);
    } else if (c == 2) {
      cout << que.top() << endl;
    } else que.pop();
  }

  return 0;
}
