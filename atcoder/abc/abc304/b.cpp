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

  int ans;
  if (n <= 1e3-1) ans = n;
  else if (n <= 1e4-1) ans = n - n%10;
  else if (n <= 1e5-1) ans = n - n%100;
  else if (n <= 1e6-1) ans = n - n%1000;
  else if (n <= 1e7-1) ans = n - n%10000;
  else if (n <= 1e8-1) ans = n - n%100000;
  else ans = n - n%1000000;

  out(ans);
  return 0;
}
