#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

vector<pair<ll, int>> factorize(ll n) {
  ll rem = n;
  vector<pair<ll, int>> p;

  for (ll i = 2; i*i <= n; ++i) {
    if (rem%i != 0) continue;

    p.emplace_back(i, 0);

    while (rem%i == 0) {
      rem /= i;
      p.back().second++;
    }
  }

  if (rem != 1LL) p.emplace_back(rem, 1);

  return p;
};

int main() {
  ll a, b; cin >> a >> b;
  ll g = gcd(a, b);
  auto f = factorize(g);
  int ans = f.size() + 1;
  out(ans);
  return 0;
}
