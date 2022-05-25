#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int calc(int x) {
  return pow(x, 2) + (2*x) + 3;
}

int main() {
  int t, ans;
  cin >> t;
  ans = calc(calc(calc(t) + t) + calc(calc(t)));

  cout << ans << endl;

  return 0;
}
