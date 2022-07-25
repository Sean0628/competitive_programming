#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int la, ra, lb, rb; cin >> la >> ra >> lb >> rb;
  int l, r;

  l = (la > lb) ? la : lb;
  r = (ra < rb) ? ra : rb;

  if (l >= r) cout << 0 << endl;
  else cout << r - l << endl;

  return 0;
}
