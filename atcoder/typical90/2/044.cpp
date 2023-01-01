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
  rep(i, n) cin >> a[i];

  int beg = 0;
  rep(i, q) {
    int t, x, y; cin >> t >> x >> y;
    x--, y--;
    int idxX = (x+beg)%n;
    int idxY = (y+beg)%n;

    if (t == 1) {
      swap(a[idxX], a[idxY]);
    } else if (t == 2) {
      beg = (beg+n-1)%n;
    } else {
      cout << a[idxX] << endl;
    }
  }
  return 0;
}
