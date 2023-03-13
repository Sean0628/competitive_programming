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
  int d, n; cin >> d >> n;

  auto f = [](auto f, int x) {
    if (x % 100 != 0) return 0;

    return f(f, x/100)+1;
  };

  int cnt = 0;
  int x = 1;
  while (true) {
    if (f(f, x) == d) cnt++;

    if (cnt == n) break;
    x++;
  }

  out(x);
  return 0;
}
