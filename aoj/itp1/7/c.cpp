#include <bits/stdc++.h>

int main() {
  int r, c, sum;

  scanf("%d %d", &r, &c);
  int T[r + 1][c + 1];

  for (int i = 0; i < r + 1; ++i) {
    for (int j = 0; j < c + 1; ++j) {
      T[i][j] = 0;
    }
  }

  for (int i = 0; i < r; ++i) {
    sum = 0;
    for (int j = 0; j < c; ++j) {
      scanf("%d", &T[i][j]);
      sum += T[i][j];
      T[r][j] += T[i][j];
    }

    T[i][c] = sum;
    T[r][c] += sum;
  }

  for (int i = 0; i < r + 1; ++i) {
    for (int j = 0; j < c; ++j) {
      printf("%d ", T[i][j]);
    }
    printf("%d\n", T[i][c]);

  }

  return 0;
}
