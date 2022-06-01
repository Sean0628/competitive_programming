#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c; cin >> a >> b >> c;

  for (;;) {
    if (a <= c && c <= b) break;
    if (c > b) {
      c = -1;
      break;
    }

    c *= 2;
  }

  cout << c << endl;

  return 0;
}
