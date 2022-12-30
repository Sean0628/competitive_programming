#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b; cin >> a >> b;
  if (a <= b && (6 * a) >= b) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
