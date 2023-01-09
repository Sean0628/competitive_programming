#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b; cin >> a >> b;
  int ans = pow(a, b);
  cout << ans << endl;
  return 0;
}
