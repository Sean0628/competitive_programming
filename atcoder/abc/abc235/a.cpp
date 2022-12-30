#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, a, b, c, sum;
  cin >> x;

  a = x % 10;
  x /= 10;
  b = x % 10;
  c = x / 10;

  sum = (a*100 + b*10 + c) + (b*100 + c*10 + a) + (c*100 + a*10 + b);

  cout << sum << endl;

  return 0;
}
