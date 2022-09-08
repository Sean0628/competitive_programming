#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int k, a, b; cin >> k >> a >> b;

  int base = k;
  while (k <= b) {
    if (a <= k && k <= b) {
      cout << "OK" << endl;
      return 0;
    }

    k += base;
  }

  cout << "NG" << endl;
  return 0;
}
