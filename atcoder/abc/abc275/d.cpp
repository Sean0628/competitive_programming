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
  ll n; cin >> n;

  unordered_map<ll, ll> memo;
  auto f = [&](auto f, ll k) -> ll {
    if (k == 0) return 1;
    if (memo.count(k)) return memo[k];

    ll res = f(f, k/2)+f(f, k/3);

    return memo[k] = res;
  };

  cout << f(f, n) << endl;

  return 0;
}
