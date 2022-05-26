#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  char a[1], x[1], b[1];
  cin >> a[0] >> x[0] >> b[0];

  int ia = a[0] - '0';
  int ib = b[0] - '0';

  cout << ia*ib << endl;

  return 0;
}
