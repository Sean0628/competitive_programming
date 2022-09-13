#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;

  if (h == 1 || w == 1) cout << h*w << endl;
  else {
    int wc = (w%2==0) ? w/2 : w/2+1;
    int ans = (h/2) * wc + (h%2) * wc;

    cout << ans << endl;
  }
  return 0;
}
