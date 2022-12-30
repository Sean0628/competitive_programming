#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, q; cin >> n >> k >> q;
  vector<int> l(q);
  vector<bool> r(n, false);

  rep(i, k) {
    int a; cin >> a;
    r[a-1] = true;
  }
  rep(i, q) cin >> l[i];

  rep(i, q) {
    int c = 0;

    rep(j, n) {
      if (r[j]) {
        c++;

        if (c == l[i]) {
          if (j == n-1 || r[j+1]) break;
          else {
            r[j] = false;
            r[j+1] = true;
          }
        }
      }
    }

  }

  rep(i, n) {
    if (r[i]) cout << i+1 << " ";
  }

  cout << endl;

  return 0;
}
