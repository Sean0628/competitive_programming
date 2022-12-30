#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, inp; cin >> n;
  int mx = (2*n+1)+1;
  vector<int> s(mx, 0);

  int num = mx;
  while (num > 0) {
    for (int i = 1; i < mx; i++) {
      if (!s[i]) {
        cout << i << endl;
        s[i] = 1;
        num--;
        break;
      }
    }

    cin >> inp;
    if (inp == 0) return 0;
    s[inp] = 1;
    num--;
  }

  return 0;
}
