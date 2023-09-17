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
  string s; cin >> s;
  int n; n = s.size();
  int mx = 0;
  rep(i, n) {
    for (int j = i+1; j <= n; j++) {
      string tmp, r; tmp = r = s.substr(i, j-i);
      reverse(r.begin(), r.end());
      if (tmp == r) chmax(mx, j-i);
    }
  }

  out(mx);
  return 0;
}
