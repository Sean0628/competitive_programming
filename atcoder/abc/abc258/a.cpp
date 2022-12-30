#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int k; cin >> k;

  int h, m;
  if (k >= 60) h = 22;
  else h = 21;

  m = k % 60;

  if (m > 9) cout << h << ":" << m << endl;
  else cout << h << ":" << "0" << m << endl;

  return 0;
}
