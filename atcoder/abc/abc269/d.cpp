#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<P> p(n);
  rep(i, n) cin >> p[i].first >> p[i].second;

  map<P, int> mp;
  rep(i, n) mp[p[i]] = i;
  dsu d(n);
  rep(i, n) {
    auto [x, y] = p[i];
    auto check = [&](P q) {
      if (mp.count(q)) {
        d.merge(i, mp[q]);
      }
    };
    check(P(x+1, y));
    check(P(x, y+1));
    check(P(x+1, y+1));
  }

  int ans = 0;
  rep(i, n) if (d.leader(i) == i) ans++;
  cout << ans << endl;
  return 0;
}
