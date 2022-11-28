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
  while (x > 1 || y > 1) {
    ans.emplace_back(make_pair(x, y));

    if (x > y) x -= y;
    else y -= x;
  }

  cout << ans.size() << endl;

  reverse(ans.begin(), ans.end());
  for (auto p : ans) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}
