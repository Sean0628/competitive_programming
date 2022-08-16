#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  int mn = a;
  for (int i : { b, c, d }) {
    mn = min(mn, i);
  }

  cout << mn << endl;

  return 0;
}
