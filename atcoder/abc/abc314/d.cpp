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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int q; cin >> q;

  int type = 0, last = -1;
  vector<int> e(n);
  rep(i, q) {
    int t, x; char c;
    cin >> t >> x >> c;
    x--;
    if (t == 1) {
      s[x] = c;
      e[x] = i;
    } else {
      type = t, last = i;
    }
  }

  rep(i, n) {
    if (e[i] < last) {
      if (type == 2) s[i] = tolower(s[i]);
      else s[i] = toupper(s[i]);
    }
  }

  out(s);
  return 0;
}
