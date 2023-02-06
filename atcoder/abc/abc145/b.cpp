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
  int n; cin >> n;
  string s; cin >> s;
  bool ok = true;
  if (n%2 == 0) {
    int m = n/2;
    rep(i, n/2) {
      if (s[i] == s[m+i]) continue;
      ok = false;
    }

  } else ok = false;

  cyn(ok);
  return 0;
}
