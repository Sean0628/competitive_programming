#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n;
  cin >> n;

  bool b = pow(2, n) > pow(n, 2);
  b ? cout << "Yes" << endl : cout << "No" << endl;

  return 0;
}
