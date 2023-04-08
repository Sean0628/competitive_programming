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
void cyn(bool x) { cout << (x ? "YES" : "NO") << endl; }

bool solve(int a, int b, int c) {
  int num = a;
  bool ok = false;

  set<int> s;

  while (true) {
    if (s.count(num%b)) break;
    s.insert(num%b);

    if (num%b == c) {
      ok = true;
      break;
    }

    num += a;
  }

  return ok;
}

int main() {
  int a, b, c; cin >> a >> b >> c;

  cyn(solve(a, b, c));
  return 0;
}
