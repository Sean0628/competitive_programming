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

  rep(i, n) {
    if (i+1 < n && s[i] == 'c' && s[i+1] == 'h') {
      i++;
      continue;
    } else if (s[i] == 'o' || s[i] == 'k' || s[i] == 'u') {
      continue;
    } else {
      out("NO");
      return 0;
    }
  }

  out("YES");
  return 0;
}
