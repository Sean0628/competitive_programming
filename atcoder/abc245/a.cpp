#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d;
  string n;

  cin >> a >> b >> c >> d;

  if (a > c) {
    n = "Aoki";
  } else if (a < c) {
    n = "Takahashi";
  } else {
    if (b > d) {
      n = "Aoki";
    } else {
      n = "Takahashi";
    }
  }

  cout << n << endl;

  return 0;
}
