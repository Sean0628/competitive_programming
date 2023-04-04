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
    if (a[i] < 400) {
      mp[0]++;
    } else if (a[i] < 800) {
      mp[1]++;
    } else if (a[i] < 1200) {
      mp[2]++;
    } else if (a[i] < 1600) {
      mp[3]++;
    } else if (a[i] < 2000) {
      mp[4]++;
    } else if (a[i] < 2400) {
      mp[5]++;
    } else if (a[i] < 2800) {
      mp[6]++;
    } else if (a[i] < 3200) {
      mp[7]++;
    } else {
      mp[8]++;
    }
  }

  int mn = 0;
  int mx = 0;

  for (auto [k, v] : mp) {
    if (k == 8) {
      mx += v;
    } else {
      if (v > 0) {
        mn++;
        mx++;
      }
    }
  }

  if (mn == 0) mn = 1;

  printf("%d %d\n", mn, mx);
  return 0;
}
