#include <bits/stdc++.h>

int main() {
  int n, m, number;
  scanf("%d %d", &n, &m);
  int** A = new int*[n];

  for (int i = 0; i < n; ++i) A[i] = new int[m];
  int b[m];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &number);
      A[i][j] = number;
    }
  }

  for (int i =0; i < m; ++i) {
    scanf("%d", &number);
    b[i] = number;
  }

  long long sum;

  for (int i = 0; i < n; ++i) {
    sum = 0;

    for (int j = 0; j < m; ++j) {
      sum += A[i][j] * b[j];
    }

    printf("%lld\n", sum);
  }

  return 0;
}
