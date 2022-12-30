#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y, cnt = 0;;
  cin >> x >> y;

  while (x < y) {
    x += 10;
    cnt++;
  }

  cout << cnt << endl;

  return 0;
}
