#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n; cin >> n;
  vector<string> s(n), t(n);
  unordered_map<string, ll> mp;
  ll idx = 0;
  rep(i, n) {
    cin >> s[i] >> t[i];
    if (!mp.count(s[i])) {
      mp[s[i]] = idx;
      idx++;
    }

    if (!mp.count(t[i])) {
      mp[t[i]] = idx;
      idx++;
    }
  }

  dsu d(mp.size());

  bool ok = true;
  rep(i, n) {
    if (d.leader(mp[s[i]]) == d.leader(mp[t[i]])) {
      ok = false;
      break;
    }
    d.merge(mp[s[i]], mp[t[i]]);
  }

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}
