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
  ll n, d, p; cin >> n >> d >> p;
  vector<ll> f(n);
  rep(i, n) cin >> f[i];

  sort(f.rbegin(), f.rend());

  ll tot = 0, tmp = 0;
  rep(i, n) {
    if (i%d == 0) {
      if (tmp > p) {
        tot -= tmp;
        tot += p;
      }

      tmp = 0;
    }
    tmp += f[i];
    tot += f[i];
  }

  if (tmp > p) {
    tot -= tmp;
    tot += p;
  }

  out(tot);
  return 0;
}
