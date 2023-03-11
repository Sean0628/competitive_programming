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
void cyn(bool x) { cout << (x ? "AC" : "WA") << endl; }

int main() {
  string s; cin >> s;

  bool ok = true;
  if (s[0] != 'A') ok = false;
  bool c = false;
  int idx = 0;
  for (int i = 2; i <= s.size()-2; i++) {
    if (s[i] == 'C') {
      c = true;
      idx = i;
    }
  }

  if (!c) ok = false;

  rep(i, s.size()) {
    if (i == 0 || i == idx) continue;
    if (islower(s[i])) continue;

    ok = false;
  }

  cyn(ok);

  return 0;
}
