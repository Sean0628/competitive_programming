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
  int n, m; cin >> n >> m;
  vector<int> L(n);
  rep(i, n) cin >> L[i];

  ll l = 0, r = 1e18;

  while (r - l > 1) {
    ll mid = (l + r) / 2;
    auto check = [&](ll w) {
      int line = 0; ll rem = 0;
      rep(i, n) {
        if (rem >= L[i]+1) {
          rem -= L[i]+1;
        } else {
          line++; rem = w-L[i];
          if (rem < 0) return false;
        }
      }

      return line <= m;
    };

    if (check(mid)) r = mid; else l = mid;
  }

  out(r);
  return 0;
}
