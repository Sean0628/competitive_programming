#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  int ans;
  if (1 <= n && n <= 125) ans = 4;
  else if (126 <= n && n <= 211) ans = 6;
  else ans = 8;

  cout << ans << endl;

  return 0;
}
