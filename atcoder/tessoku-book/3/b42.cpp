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
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto solve = [&](bool first_op, bool second_op) {
    ll res = 0;
    rep(i, n) {
      ll card1 = first_op ? a[i] : -a[i];
      ll card2 = second_op ? b[i] : -b[i];

      if (card1 + card2 > 0) res += card1 + card2;
    }

    return res;
  };

  ll ans = 0;
  chmax(ans, solve(true, true));
  chmax(ans, solve(true, false));
  chmax(ans, solve(false, true));
  chmax(ans, solve(false, false));

  out(ans);

  return 0;
}
