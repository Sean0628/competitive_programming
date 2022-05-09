#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b;

  scanf("%d %d %d", &n, &a, &b);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < a; ++j) {
      for (int k = 0; k < n; ++k) {
        for (int l = 0; l < b; ++l) {
          if (i % 2 == 0) {
            char c = (k % 2 == 0) ? '.' : '#';
            printf("%c", c);
          } else {
            char c = (k % 2 == 0) ? '#' : '.';
            printf("%c", c);
          }
        }
      }
      printf("\n");
    }
  }

  return 0;
}
