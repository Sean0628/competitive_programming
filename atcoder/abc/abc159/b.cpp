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
  int n = s.size()-1;

  auto f = [s](int l, int r) {
    for (int ll = l,  rr = r; ll < rr; ++ll, --rr) {
      if (s[ll] != s[rr]) return false;
    }

    return true;
  };


  bool ok = f(0, n) && f(0, (n-1)/2) && f((n+3)/2, n);
  cyn(ok);
  return 0;
}
