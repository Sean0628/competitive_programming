#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;

  int flag = 0;
  while (a > 0 && c > 0) {
    if (flag%2 == 0) c -= b;
    else a -= d;

    flag++;
  }

  if (a > c) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
