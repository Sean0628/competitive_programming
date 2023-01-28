#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;

  bool ok = false;
  rep(i, 2) {
    if (s[i] == 'A' && s[i+1] == 'B') ok = true;
    if (s[i] == 'B' && s[i+1] == 'A') ok = true;
  }

  cyn(ok);
  return 0;
}
