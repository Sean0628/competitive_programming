#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, n; cin >> a >> b >> n;
  ll x = n;
  if (n >= b-1) x = b-1;
  ll ans = a*x/b - a*(x/b);
  cout << ans << endl;
  return 0;
}
