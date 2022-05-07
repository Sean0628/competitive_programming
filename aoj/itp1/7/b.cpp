#include <bits/stdc++.h>

int main() {
  int n, x, c;

  while (true) {
    c = 0;
    scanf("%d %d", &n, &x);
    if (n == 0 && x == 0) break;

    for (int m = 1; m < (x / 3) && m <= (n - 2); ++m) {
      for (int k = (m + 1); k < x - (m + k) && k <= (n - 1); ++k) {
        if ((x - (m + k)) <= n) ++c;
      }
    }
    printf("%d\n", c);

  }

  return 0;
}
