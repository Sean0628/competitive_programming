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
  int a, b; cin >> a >> b;
  int x, y; cin >> x >> y;
  vector<int> av(a), bv(b);

  rep(i, a) cin >> av[i];
  rep(i, b) cin >> bv[i];

  ll tot = 0;
  int cnt = 0;

  int curr = 0, ai = 0, bi = 0;

  while (ai < a || bi < b) {
    if (curr == 0) {
      while (ai < a && tot > av[ai]) ai++;

      if (ai == a) break;

      tot = av[ai]+x;
      ai++;
      curr = 1;
    } else {
      while (bi < b && tot > bv[bi]) bi++;

      if (bi == b) break;

      tot = bv[bi]+y;
      bi++;
      curr = 0;
      cnt++;
    }
  }

  out(cnt);
  return 0;
}
