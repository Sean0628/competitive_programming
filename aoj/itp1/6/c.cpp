#include <bits/stdc++.h>

using namespace std;

void print(int b[3][10]) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 10; ++j) {
      cout << ' ' << b[i][j];
    }

    cout << endl;
  }
}

void print_line() {
  cout << "####################" << endl;
}

int main() {
  int n, b, f, r, v, b_1[3][10] = {}, b_2[3][10] = {}, b_3[3][10] = {}, b_4[3][10] = {};

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> b >> f >> r >> v;

    switch (b) {
      case 1:
        b_1[f - 1][r - 1] += v;
        break;
      case 2:
        b_2[f - 1][r - 1] += v;
        break;
      case 3:
        b_3[f - 1][r - 1] += v;
        break;
      case 4:
        b_4[f - 1][r - 1] += v;
        break;
    }
  }

  print(b_1);
  print_line();

  print(b_2);
  print_line();

  print(b_3);
  print_line();

  print(b_4);

  return 0;
}
