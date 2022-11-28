#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  vector<int> a(n);
  rep(i, n) a[i] = i + 1;
  bool rev = false;

  auto f = [&](int m) {
    int idx = m;
    if (rev) {
      idx = n - m - 1;
    }
    return idx;
  };

  rep(i, q) {
    int c, x, y;
    cin >> c;
    if (c == 1) {
      cin >> x >> y;
      x--;
      a[f(x)] = y;
    } else if (c == 2) {
      rev = !rev;
    } else {
      cin >> x;
      x--;
      cout << a[f(x)] << endl;
    }
  }
  return 0;
}
