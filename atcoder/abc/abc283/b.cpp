#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int q; cin >> q;
  rep(i, q) {
    int c, k, x; cin >> c;
    if (c == 1) {
      cin >> k >> x;
      k--;
      a[k] = x;
    } else {
      cin >> k;
      k--;
      cout << a[k] << endl;
    }
  }
  return 0;
}
