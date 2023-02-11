#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;

  bool ok = true;
  rep(i, s.size()) {
    if (i%2 != 0) {
      if (s[i] == 'L' || s[i] == 'U' || s[i] == 'D') continue;
      ok = false;
    } else {
      if (s[i] == 'R' || s[i] == 'U' || s[i] == 'D') continue;
      ok = false;
    }
  }

  cyn(ok);
  return 0;
}
