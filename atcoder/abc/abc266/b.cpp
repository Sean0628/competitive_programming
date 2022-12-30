#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
 
int main() {
  ll n; cin >> n;
  for (ll i = 0; i < 998244353; ++i) {
    if ((n - i)%998244353 == 0) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
