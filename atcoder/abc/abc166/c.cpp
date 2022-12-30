#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m; cin >> n >> m;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  vector<ll> a(m), b(m);

  map<ll, set<ll>> mp;
  vector<bool> p(n);
  rep(i, m) {
    cin >> a[i] >> b[i];
    p[a[i]-1] = true;
    p[b[i]-1] = true;
    mp[a[i]].insert(b[i]);
    mp[b[i]].insert(a[i]);
  }

  ll cnt = 0;
  rep(i, n) if (!p[i]) cnt++;

  for (auto& m : mp) {
    bool ok = true;
    for (auto& ele : m.second) {
      if (h[m.first-1] <= h[ele-1]) {
        ok = false;
        break;
      }
    }
    if (ok) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
