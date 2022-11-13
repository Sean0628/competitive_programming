#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  string ans = "";
  while (n > 0) {
    ans += (n % 2 == 0 ? "0" : "1");
    n /= 2;
  }

  int m = ans.size();
  if (m <= 10) rep(i, 10-m) ans += "0";
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}
