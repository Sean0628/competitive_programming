#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, n; cin >> x >> n;

  vector<int> d(102);
  rep(i, n) {
     int p; cin >> p;
     d[p] = 1;
  }
  P ans(INT_MAX, -1);
  for (int i = 0; i <= 101; ++i) {
    if (d[i] == 1) continue;
    int diff = abs(x-i);
    ans = min(ans, P(diff, i));
  }

  cout << ans.second << endl;
  return 0;
}
