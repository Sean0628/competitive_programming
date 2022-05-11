#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string d;
  int m, h;

  while (true) {
    cin >> d;
    if (d[0] == '-') break;

    cin >> m;

    int length = d.length();
    rep(i, m) {
      cin >> h;

      d = d.substr(h, length - h) + d.substr(0, h);
    }

    cout << d << endl;
  }

  return 0;
}
