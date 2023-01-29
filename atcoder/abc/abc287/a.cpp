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
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int fcnt = 0, acnt = 0;
  rep(i, n) {
    if (s[i] == "For") fcnt++;
    else acnt++;
  }

  bool ok = fcnt > acnt;
  cyn(ok);

  return 0;
}
