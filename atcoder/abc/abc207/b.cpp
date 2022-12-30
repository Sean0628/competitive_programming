#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c, d; cin >> a >> b >> c >> d;

  ll r = 0, cnt = 0;
  if (b >= c*d) cnt = -1;
  else {
    while (a > r*d) {
      a += b;
      r += c;
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
