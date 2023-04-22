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
  map<char, int> mp;
  string s; cin >> s;

  rep(i, s.size()) mp[s[i]]++;

  rep(i, 6) {
    char c = 'A' + i;
    cout << mp[c] << (i == 5 ? "\n" : " ");
  }
  return 0;
}
