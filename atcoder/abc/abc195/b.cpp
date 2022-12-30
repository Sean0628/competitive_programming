#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, w; cin >> a >> b >> w;
  int m = 1e9, M = 0;
  int W = w * 1000;

  for (int n = 1; n <= 1000000; ++n) {
    if (a*n <= W && W <= b*n) {
      m = min(m, n);
      M = max(M, n);
    }
  }

  if (M == 0) cout << "UNSATISFIABLE";
  else cout << m << ' ' << M << endl;

  return 0;
}
