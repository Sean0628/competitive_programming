#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b; cin >> a >> b;
  string ans;
  if (a > 0 && b == 0) ans = "Gold";
  else if (b > 0 && a == 0) ans = "Silver";
  else ans = "Alloy";

  cout << ans << endl;

  return 0;
}
