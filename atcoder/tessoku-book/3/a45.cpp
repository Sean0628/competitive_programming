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
  int n; char c; cin >> n >> c;
  string a; cin >> a;

  map<char, int> mp;
  mp['W'] = 0;
  mp['B'] = 1;
  mp['R'] = 2;

  int score = 0;
  rep(i, n) score += mp[a[i]];

  score %= 3;

  bool ok = false;
  if (score == mp[c]) ok = true;

  cyn(ok);
  return 0;
}
