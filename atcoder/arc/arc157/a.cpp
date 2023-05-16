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
  int n, a, b, c, d; cin >> n >> a >> b >> c >> d;

  string ans = "No";
  if (abs(b-c) > 1);
  else if (abs(b-c) == 1) ans = "Yes";
  else if (b != 0) ans = "Yes";
  else if (a == 0 || d == 0) ans = "Yes";

  out(ans);
  return 0;
}
