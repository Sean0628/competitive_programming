#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<vector<ll>> s;

  int q; cin >> q;
  ll x, c;

  int cur = 0;

  while(q > 0) {
    int n; cin >> n;
    if (n == 1) {
      cin >> x >> c;
      vector<ll> tmp = { x, c };
      s.emplace_back(tmp);
    } else {
      cin >> c;
      ll tot = 0;

      int tmpcur = 0;
      for (int i = cur; i < s.size(); ++i) {
        if (s[i][1] < c) {
          tot += s[i][0] * s[i][1];

          c -= s[i][1];
          tmpcur = i;
          s[i][1] = 0;
        } else {
          ll t = c * s[i][0];
          tot += t;

          s[i][1] -= c;
          c = 0;
        }

        if (c == 0) {
          cur = tmpcur;
          break;
        }
      }

      cout << tot << endl;
    }

    q--;
  }
  return 0;
}
