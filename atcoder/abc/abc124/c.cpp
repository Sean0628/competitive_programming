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

int main() {
  string s; cin >> s;
  int n = s.size();

  int a = 0, b = 0;
  rep(i, n) {
    if (i%2 == 0) {
      if (s[i] != '0') a++;
    } else if (s[i] != '1') a++;
  }

  rep(i, n) {
    if (i%2 == 0) {
      if (s[i] != '1') b++;
    } else if (s[i] != '0') b++;
  }

  int ans = min(a, b);

  out(ans);

  return 0;
}
