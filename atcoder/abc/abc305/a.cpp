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
  if (n%5 == 0) out(n);

  int d = n%10;
  if (d == 1 || d == 2) out(n-d);
  else if (d == 3 || d == 4) out(n-d+5);
  else if (d == 6 || d == 7) out(n-d+5);
  else if (d == 8 || d == 9) out(n-d+10);

  return 0;
}
