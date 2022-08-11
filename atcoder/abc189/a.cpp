#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  char c1, c2, c3; cin >> c1 >> c2 >> c3;

  if (c1 == c2 && c2 == c3) cout << "Won" << endl;
  else cout << "Lost" << endl;

  return 0;
}
