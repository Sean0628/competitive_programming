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
  ll N; cin >> N;

  set<ll> d;
  auto div = [&](ll n) {
    for (ll i = 1; i*i <= n; i++) {
      if (n%i == 0) {
        d.insert(i);
        d.insert(n/i);
      }
    }
  };

  div(2*N);

  ll ans = 0;

  for (auto n : d) {
    ll m = (2*N)/n;
    if ((n-m)%2 == 1) {
      if (n == m) ans++;
      else ans += 2;
    }
  }

  out(ans);
  return 0;
}
