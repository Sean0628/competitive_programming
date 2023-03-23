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

bool check(char c) { return '0' <= c && c <= '9'; };

int main() {
  int a, b; cin >> a >> b;

  string s; cin >> s;

  bool ok = true;

  if (s[a] != '-') ok = false;

  rep(i, a) if (!check(s[i])) ok = false;
  for (int i = 0; i < a+b; ++i) {
    if (i == a) continue;

    if (!check(s[i])) ok = false;
  }

  cyn(ok);

  return 0;
}
