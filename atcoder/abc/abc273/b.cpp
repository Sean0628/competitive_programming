#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  ll x; cin >> x;
  int k; cin >> k;

  ll ans = 0;
  rep(i, k) {
    ll n = x % (ll) pow(10, i+1);

    x -= n;
    if (n >= 5*(ll) pow(10, i)) x += pow(10, i+1);
  }

  cout << x << endl;

  return 0;
}
