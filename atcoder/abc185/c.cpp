#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int l; cin >> l;
  ll ans = 1;

  for (int i = 1; i <= 11; ++i) {
    ans *= l-i;
    ans /= i;
  }

  cout << ans << endl;
  return 0;
}
