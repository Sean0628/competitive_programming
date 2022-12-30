#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, m; cin >> h >> m;


  int i = h, j = m;
  while (true) {
    while (true) {
      int a = i / 10;
      int b = i % 10;
      int c = j / 10;
      int d = j % 10;

      int x = a*10+c;
      int y = b*10+d;
      if (0 <= x && x <= 23) {
        if (0 <= y && y <= 59) {
          cout << i << " " << j << endl;
          return 0;
        }
      }
      if (j == 59) break;
      else j++;
    }
    j = 0;
    if (i == 23) i = 0;
    else i++;
  }
  return 0;
}
