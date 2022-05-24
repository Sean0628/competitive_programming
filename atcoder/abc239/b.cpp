#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x;
  cin >> x;

  cout << x / 10 - (x % 10 < 0) << endl;

  return 0;
}
