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
  int ans = 0;
  char b = s[0];

  for (int i = 1; i < n; i++) {
    if (s[i] != b) {
      ans++;
      b = s[i];
    }
  }

  out(ans);
  return 0;
}
