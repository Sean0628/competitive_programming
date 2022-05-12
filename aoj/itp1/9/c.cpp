#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  string ts, hs;
  int t = 0, h =0;

  rep (i, n) {
    cin >> ts >> hs;
    if (ts.compare(hs) ==0) {
      ++t; ++h;
    } else if (ts.compare(hs) > 0) {
      t += 3;
    } else {
      h += 3;
    }
  }

  cout << t << ' ' << h << endl;
  return 0;
}
