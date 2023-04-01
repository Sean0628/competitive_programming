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
  vector<string> c(2);
  rep(i, 2) cin >> c[i];

  if (c[0][0]==c[1][2] && c[0][1]==c[1][1] && c[0][2]==c[1][0]) out("YES");
  else out("NO");

  return 0;
}
