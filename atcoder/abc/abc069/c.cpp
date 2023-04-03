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
    if (a[i]%4 == 0) {
      mp[4]++;
    } else if (a[i]%2 == 0) {
      mp[2]++;
    } else {
      mp[1]++;
    }
  }

  vector<ll> ans(mp[2], 2);
  rep(i, n-mp[2]) {
    int mod = 0;
    if (mp[2] == 0) mod = 1;
    if (i%2 == mod) {
      if (mp[4] > 0) {
        ans.push_back(4);
        mp[4]--;
      } else {
        ans.push_back(1);
      }
    } else {
      if (mp[1] > 0) {
        ans.push_back(1);
        mp[1]--;
      } else {
        ans.push_back(4);
      }
    }
  }

  bool ok = true;
  rep(i, n-1) {
    if (ans[i]%4*ans[i+1]%4 == 0) continue;
    ok = false;
  }

  cyn(ok);

  return 0;
}
