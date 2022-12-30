#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, t; cin >> n >> x >> t;

  int tot = 0;
  while (n > 0) {
    tot += t;
    n -= x;
  }

  cout << tot << endl;

  return 0;
}
