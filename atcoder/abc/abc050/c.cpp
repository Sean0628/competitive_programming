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

  mint ans = 0;

  map<int, int> mp;
  rep(i, n) mp[a[i]]++;

  bool ok = true;

  if (n%2 == 0) {
    for (int i = 1; i < n; i += 2) {
      if (mp[i] != 2) ok = false;
    }
  } else {
    if (mp[0] != 1) ok = false;
    for (int i = 2; i < n; i += 2) {
      if (mp[i] != 2) ok = false;
    }
  }

  if (ok) {
    ans = 1;
    rep(i, n/2) ans *= 2;
  }

  out(ans.val());

  return 0;
}
