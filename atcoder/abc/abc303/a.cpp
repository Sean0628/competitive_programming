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
  string s, t; cin >> s >> t;

  bool ok = true;
  rep(i, n) {
    if (s[i] == t[i]) continue;

    if (s[i] == '1' && t[i] == 'l') continue;
    if (s[i] == '0' && t[i] == 'o') continue;
    if (s[i] == 'l' && t[i] == '1') continue;
    if (s[i] == 'o' && t[i] == '0') continue;

    ok = false;
  }

  cyn(ok);
  return 0;
}
