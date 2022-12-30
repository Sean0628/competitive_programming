#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(k);
  rep(i, n) cin >> a[i];
  rep(i, k) cin >> b[i];

  vector<int> m(n, 0);
  int mv = 0;
  rep(i, n) {
    if (mv < a[i]) {
      rep(j, i) m[j] = 0;
      m[i] = 1;
      mv = a[i];
    }

    if (mv == a[i]) m[i] = 1;
  }

  bool p = false;
  rep(i, n) {
    rep(j, k) {
      if (m[i] && (i+1) == b[j]) p = true;
    }
  }

  cout << (p ? "Yes" : "No") << endl;

  return 0;
}
