#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;

  char g[3] = "asb";
  int i = 0;
  char p[1] = { 'F', 'h' };
  while (v >= 0) {
    if (i % 3 == 0) {
      v -= a;
      p[0] = 'F';
    }
    if (i % 3 == 1) {
      v -= b;
      p[0] = 'M';
    }
    if (i % 3 == 2) {
      v -= c;
      p[0] = 'T';
    }

    ++i;
  }

  cout << p[0] << endl;

  return 0;
}

