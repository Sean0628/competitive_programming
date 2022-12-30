#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<ll> r(n+1), b(n+1);

  r[n] = 1;

  for (int i = n; i >= 2; --i) {
    r[i-1] += r[i];
    b[i] += r[i]*x;

    r[i-1] += b[i];
    b[i-1] += b[i]*y;
  }

  cout << b[1] << endl;

  return 0;
}
