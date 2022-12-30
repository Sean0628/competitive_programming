#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll idx = 0;
  while (q) {
    int t, x, y; cin >> t >> x >> y;
    x--; y--;
    if (t == 1) {
      swap(a[(x+idx)%n], a[(y+idx)%n]);
    } else if (t == 2) {
      if (idx == 0) idx = n-1;
      else idx--;
    } else {
      cout << a[(x+idx)%n] << endl;
    }

    q--;
  }
  return 0;
}
