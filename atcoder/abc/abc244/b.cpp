#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d = 0, x = 0, y = 0;
  cin >> n;
  string s;
  cin >> s;

  rep(i, s.size()) {
    if (s[i] == 'S') {
      if (d % 4 == 0) x++;
      if (d % 4 == 1) y--;
      if (d % 4 == 2) x--;
      if (d % 4 == 3) y++;
    } else {
      d += 1;
    }
  }

  cout << x << ' ' << y << endl;

  return 0;
}
