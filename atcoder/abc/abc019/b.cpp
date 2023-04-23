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

  char c = s[0];
  int cnt = 1;
  string ans = "";
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == c) {
      cnt++;
    } else {
      ans += c;
      ans += to_string(cnt);
      c = s[i];
      cnt = 1;
    }

    if (i == s.size() - 1) {
      ans += c;
      ans += to_string(cnt);
    }
  }

  out(ans);

  return 0;
}
