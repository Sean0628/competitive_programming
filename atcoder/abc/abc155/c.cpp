#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  map<string, int> mp;

  rep(i, n) {
    string s; cin >> s;
    mp[s]++;
  }

  int mx = 0;
  for (auto e : mp) chmax(mx, e.second);

  for (auto e : mp) {
    if (e.second == mx) cout << e.first << endl;
  }
  return 0;
}
