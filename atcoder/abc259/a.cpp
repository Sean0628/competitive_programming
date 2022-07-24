#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, x, t, d; cin >> n >> m >> x >> t >> d;

  if (m > x) cout << t << endl;
  else {
    rep(i, x - m) t -= d;
    cout << t << endl;
  }

  return 0;
}
