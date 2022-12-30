#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w, r, c, ir, ic, cnt = 0;
  scanf("%d %d", &h, &w);
  scanf("%d %d", &r, &c);

  int T[h][w];
  ir = r - 1;
  ic = c - 1;

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      T[i][j] = 0;
    }
  }

  if ((ir - 1) >= 0) T[ir - 1][ic] = 1;
  if ((ir + 1) < h) T[ir + 1][ic] = 1;
  if ((ic - 1) >= 0) T[ir][ic - 1] = 1;
  if ((ic + 1) < w) T[ir][ic + 1] = 1;

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (T[i][j]) cnt++;
    }
  }

  printf("%d", cnt);

  return 0;
}
