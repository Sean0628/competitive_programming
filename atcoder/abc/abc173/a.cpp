#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  int ans;
  if (n%1000 == 0) ans = 0;
  else ans = 1000 - n%1000;

  cout << ans << endl;
  return 0;
}
