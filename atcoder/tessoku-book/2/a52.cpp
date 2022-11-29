#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;
  queue<string> que;
  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      string x; cin >> x;
      que.push(x);
    } else if (c == 2) {
      cout << que.front() << endl;
    } else {
      que.pop();
    }
  }
  return 0;
}
