#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c, k; cin >> a >> b >> c >> k;

  ll tot = 0;

  a = min(a, k);
  tot += a;
  k -= a;

  if (k == 0) {
    cout << tot << endl;
    return 0;
  }

  b = min(b, k);
  k -= b;

  if (k == 0) {
    cout << tot << endl;
    return 0;
  }

  c = min(c, k);
  tot -= c;
  k -= c;

  if (k == 0) {
    cout << tot << endl;
    return 0;
  }

  cout << tot << endl;

  return 0;
}
