#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  n %= 10;

  string ans = "";

  if (n == 2) ans = "hon";
  if (n == 4) ans = "hon";
  if (n == 5) ans = "hon";
  if (n == 7) ans = "hon";
  if (n == 9) ans = "hon";

  if (n == 0) ans = "pon";
  if (n == 1) ans = "pon";
  if (n == 6) ans = "pon";
  if (n == 8) ans = "pon";

  if (n == 3) ans = "bon";

  cout << ans << endl;
  return 0;
}
