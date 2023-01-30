#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  ll h; cin >> h;

  auto f = [](auto f, ll x) -> ll {
    if (x == 1) return 1;

    return f(f, x/2)*2+1;
  };

  cout << f(f, h) << endl;
  return 0;
}
