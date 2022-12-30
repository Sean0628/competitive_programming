#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;

  int ans = a*d - b*c;

  cout << ans << endl;
  return 0;
}
