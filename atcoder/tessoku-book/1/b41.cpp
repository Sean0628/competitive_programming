#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y; cin >> x >> y;

  vector<P> ans;
  int cnt = 0;

  while (true) {
    if (x == 1 && y == 1) break;

    ans.emplace_back(make_pair(x, y));
    cnt++;
    if (x > y) x -= y;
    else y -= x;
  }

  reverse(ans.begin(), ans.end());
  cout << cnt << endl;
  for (auto p : ans) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}
