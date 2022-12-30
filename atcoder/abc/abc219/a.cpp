#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x; cin >> x;

  string ans;

  if (0 <= x && x < 40) ans = to_string(40 - x);
  if (40 <= x && x < 70) ans = to_string(70 - x);
  if (70 <= x && x < 90) ans = to_string(90 - x);
  if (90 <= x) ans = "expert";

  cout << ans << endl;

  return 0;
}
