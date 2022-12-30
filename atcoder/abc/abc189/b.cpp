#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  vector<int> v(n), p(n);
  rep(i, n) cin >> v[i] >> p[i];


  x *= 100;
  bool d = false;
  int cnt = 0;
  rep(i, n) {
    x -= v[i]*p[i];
    cnt++;
    if (x < 0) {
      d = true;
      break;
    }
  }

  cout << ((cnt == n && !d) ? -1 : cnt) << endl;
  return 0;
}
