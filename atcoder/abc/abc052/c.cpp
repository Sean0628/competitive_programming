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
  int n; cin >> n;
  map<int, int> mp;
  auto factorize = [&](ll n) {
    ll rem = n;

    for (ll i = 2; i*i <= n; ++i) {
      if (rem%i != 0) continue;

      while (rem%i == 0) {
        rem /= i;
        mp[i]++;
      }
    }

    if (rem != 1LL) mp[rem]++;
  };

  mint ans = 1;
  for (int i = 1; i <= n; ++i) {
    factorize(i);
  }

  for (auto p : mp) {
    ans *= p.second+1;
  }

  out(ans.val());

  return 0;
}
