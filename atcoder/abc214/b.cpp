#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int s, t; cin >> s >> t;

  int cnt = 0;
  rep(a, 10000) {
    rep(b, 10000) {
      rep(c, 10000) {
        if ((a + b + c <= s) && (a * b * c <= t)) cnt++;
        else break;
      }
    }
  }

  cout << cnt << endl;

  return 0;
}
