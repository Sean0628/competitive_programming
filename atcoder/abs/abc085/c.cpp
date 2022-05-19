#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y, t, a = -1, b = -1, c = -1;
  cin >> n >> y;

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j + i <= n; ++j) {
      int k = n - (i + j);
      t = (10000 * i) + (5000 * j) + (1000 * k);
      if (t == y) {
        a = i;
        b = j;
        c = k;
      }
    }
  }

  cout << a << ' ' << b << ' ' << c << endl;

  return 0;
}
