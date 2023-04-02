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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, int> mp;

  rep(i, n) {
    mp[a[i]]++;
    mp[a[i]+1]++;
    mp[a[i]-1]++;
  }

  int ans = 0;
  for (auto [k, v] : mp) {
    cout << k << " " << v << endl;
    ans = max(ans, v);
  }

  out(ans);
  return 0;
}
