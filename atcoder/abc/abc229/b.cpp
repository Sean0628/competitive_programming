#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b;
  string ans = "Easy";
  cin >> a >> b;

  while (a > 0 || b > 0) {
    int ad = a % 10;
    int bd = b % 10;
    int dt = ad + bd;

    if (dt >= 10) {
      ans = "Hard";
      break;
    }
    a/=10;b/=10;
  }

  cout << ans << endl;

  return 0;
}
