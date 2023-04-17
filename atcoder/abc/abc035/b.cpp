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
  int t; cin >> t;
  int n = s.size();

  int cnt = 0;

  int x = 0, y = 0;
  rep(i, n) {
    if (s[i] == '?') {
      cnt++;
      continue;
    }

    if (s[i] == 'L') x--;
    if (s[i] == 'R') x++;
    if (s[i] == 'U') y++;
    if (s[i] == 'D') y--;
  }

  int ans = abs(x) + abs(y);

  if (t == 1) {
    ans += cnt;
  } else {
    if (ans >= cnt) {
      ans -= cnt;
    } else {
      ans = (cnt - ans) % 2;
    }
  }

  out(ans);

  return 0;
}
