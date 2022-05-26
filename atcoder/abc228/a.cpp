#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int s, t, x;
  string ans = "No";
  cin >> s >> t >> x;

  if (s > t) t += 24;
  if (s > x) x += 24;
  if (s <= x && x < t) ans = "Yes";

  cout << ans << endl;
  return 0;
}
