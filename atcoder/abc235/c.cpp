#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  map<ll, vector<int>> mp;
  rep(i, n) {
    ll a; cin >> a;
    mp[a].emplace_back(i);
  }

  vector<ll> x(q), k(q);
  rep(i, q) cin >> x[i] >> k[i];

  rep(i, q) {
    if (mp[x[i]].size() > 0 && mp[x[i]].size() >= k[i]) {
      cout << mp[x[i]][k[i]-1]+1 << endl;
    } else cout << -1 << endl;
  }

  return 0;
}
