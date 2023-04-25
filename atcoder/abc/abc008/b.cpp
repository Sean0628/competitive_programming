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
  int n; cin >> n;
  vector<string> a(n);
  rep(i, n) cin >> a[i];
  map<string, int> mp;

  rep(i, n) mp[a[i]]++;

  int mx = 0;
  for (auto p : mp) {
    chmax(mx, p.second);
  }

  for (auto p : mp) {
    if (p.second == mx) {
      out(p.first);
      return 0;
    }
  }

  return 0;
}
