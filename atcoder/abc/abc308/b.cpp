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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<string> c(n);
  rep(i, n) cin >> c[i];

  vector<pair<string, int>> pr(m);
  int p;
  rep(i, m) {
    string tmp; cin >> tmp;
    pr[i].first = tmp;
  }

  cin >> p;
  rep(i, m) {
    int tmp; cin >> tmp;
    pr[i].second = tmp;
  }

  map<string, int> mp;
  for (auto [k, v] : pr) mp[k] = v;

  int ans = 0;
  rep(i, n) {
    if (mp[c[i]]) ans += mp[c[i]];
    else ans += p;
  }

  out(ans);
  return 0;
}
