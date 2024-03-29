#include <bits/stdc++.h>

using namespace std;

void print(char suit, int ranks[]) {
  for (int i = 1; i <= 13; ++i) {
    if (ranks[i] == 0)
      cout << suit << ' ' << i << endl;
  }
}

int main() {
  char suit;
  int n, rank, S[14] = {}, H[14] = {}, C[14] = {}, D[14] = {};

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> suit >> rank;

    switch (suit) {
      case 'S':
        S[rank] = 1;
        break;
      case 'H':
        H[rank] = 1;
        break;
      case 'C':
        C[rank] = 1;
        break;
      case 'D':
        D[rank] = 1;
        break;
    }
  }

  print('S', S);
  print('H', H);
  print('C', C);
  print('D', D);

  return 0;
}
