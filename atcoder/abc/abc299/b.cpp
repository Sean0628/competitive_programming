#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, t; cin >> n >> t;
  vector<P> a(n);
  map<int, vector<P>> mp;

  rep(i, n) cin >> a[i].first;
  rep(i, n) cin >> a[i].second;

  rep(i, n) mp[a[i].first].emplace_back(a[i].second, i);
  if (mp[t].size() == 0) {
    sort(mp[a[0].first].rbegin(), mp[a[0].first].rend());
    out(mp[a[0].first][0].second + 1);
    return 0;
  } else {
    sort(mp[t].rbegin(), mp[t].rend());
    out(mp[t][0].second + 1);
    return 0;
  }
  return 0;
}
