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
void cyn(bool x) { cout << (x ? "Takahashi" : "Aoki") << endl; }

int main() {
  ll n, x; cin >> n >> x;
  vector<ll> l(n);
  vector<vector<ll>> A(n);

  rep(i, n) {
    cin >> l[i];

    vector<ll> a(l[i]);
    rep(j, l[i]) cin >> a[j];

    A[i] = a;
  }

  ll ans = 0;

  auto dfs = [&](auto self, ll pos, ll sum) -> void {
    if (pos == n) {
      if (sum == x) ans++;
      return;
    }

    for (auto a : A[pos]) {
      if (sum > x/a) continue;
      self(self, pos+1, sum*a);
    }
  };

  dfs(dfs, 0, 1);

  out(ans);

  return 0;
}
