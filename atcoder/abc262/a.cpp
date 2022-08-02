#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int y; cin >> y;

  if (y%4 == 0) cout << y+2 << endl;
  if (y%4 == 1) cout << y+1 << endl;
  if (y%4 == 2) cout << y << endl;
  if (y%4 == 3) cout << y+3 << endl;

  return 0;
}
