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
void cyn(bool x) { cout << (x ? "Heisei" : "TBD") << endl; }

int main() {
  string s; cin >> s;
  int m = (s[5]-'0')*10 +  s[6]-'0';

  bool h = true;
  if (m >= 5) h = false;
  cyn(h);
  return 0;
}
