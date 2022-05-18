#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, cnt = 0;
  bool valid = true;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  while (valid) {
    for (int i = 0; i < n; ++i) {
      if (a[i] % 2 != 0) {
        valid = false;
        break;
      }

      if (a[i] / 2 > 0) {
        a[i] /= 2;
      } else {
        valid = false;
        break;
      }

      if (i == (n - 1)) cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
