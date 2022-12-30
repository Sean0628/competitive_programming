#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int v, t, s, d; cin >> v >> t >> s >> d;

  int db = v*t, de = v*s;
  if (d < db || de < d) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
