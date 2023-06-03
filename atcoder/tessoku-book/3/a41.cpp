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
  string s; cin >> s;

  bool ok = false;
  rep(i, n-2) {
    bool r = true, b = true;;
    rep(j, 3) if (s[i+j] != 'R') r = false;
    rep(j, 3) if (s[i+j] != 'B') b = false;

    if (r || b) { ok = true; break; }
  }

  cyn(ok);
  return 0;
}
