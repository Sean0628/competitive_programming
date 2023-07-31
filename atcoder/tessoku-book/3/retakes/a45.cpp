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
  char c; cin >> c;
  string a; cin >> a;

  // W: 0, B: 1, R: 2
  int ans;
  if (c == 'W') ans = 0;
  else if (c == 'B') ans = 1;
  else ans = 2;

  int tot = 0;
  rep(i, a.size()) {
    if (a[i] == 'W') tot += 0;
    else if (a[i] == 'B') tot += 1;
    else tot += 2;
  }

  cyn(ans == tot%3);

  return 0;
}

