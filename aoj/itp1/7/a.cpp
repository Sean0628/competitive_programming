#include <bits/stdc++.h>

int main() {
  int m, f, r, t;
  char grade;

  while (true) {
    scanf("%d %d %d", &m, &f, &r);
    if (m == -1 && f == -1 && r == -1) break;

    if (m == -1 || f == -1) {
      grade = 'F';
    } else {
      t = m + f;
      if (t >= 80) {
        grade = 'A';
      } else if (t >= 65) {
        grade = 'B';
      } else if (t >= 50) {
        grade = 'C';
      } else if (t >= 30) {
        grade = (r >= 50) ? 'C' : 'D';
      } else {
        grade = 'F';
      }
    }

    printf("%c\n", grade);
  }


  return 0;
}
