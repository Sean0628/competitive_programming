#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  int t[100001], x[100001], y[100001];

  cin >> n;
  t[0] = x[0] = y[0] = 0;

  rep(i, n) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool v = true;
  rep (i, n) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist) v = false;
    if (dist % 2 != dt % 2) v = false;
  }

  if (v) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
