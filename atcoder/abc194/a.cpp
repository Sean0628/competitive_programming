#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b; cin >> a >> b;
  int c = a + b;

  if (c >= 15 && b >= 8) cout << 1 << endl;
  else if (c >= 10 && b >= 3) cout << 2 << endl;
  else if (c >= 3) cout << 3 << endl;
  else cout << 4 << endl;


  return 0;
}
