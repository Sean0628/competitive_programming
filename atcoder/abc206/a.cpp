#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double n; cin >> n;

  int t = floor(1.08 * n);
  if (t < 206) cout << "Yay!" << endl;
  else if (t == 206) cout << "so-so" << endl;
  else cout << ":(" << endl;

  return 0;
}
