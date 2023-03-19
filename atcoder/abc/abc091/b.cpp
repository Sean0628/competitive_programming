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
  int n, m; cin >> n;
  vector<string> s(n), t(m);
  map<string, int> mp;
  rep(i, n) {
    cin >> s[i];
    mp[s[i]]++;
  }
  cin >> m;
  rep(i, m) {
    cin >> t[i];
    mp[t[i]]--;
  }

  int ans = 0;

  for (auto p : mp) ans = max(ans, p.second);
  out(ans);

  return 0;
}
