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

ll f(ll a) {
  a++;

  ll ans = 0;
  rep(i, 50) {
    ll loop = (1LL << (i+1));
    ll cnt = (a / loop) * (loop / 2);

    cnt += max(0LL, (a % loop) - (loop / 2));

    if (cnt%2 == 1) ans += 1LL << i;
  }

  return ans;
}


int main() {
  ll a, b; cin >> a >> b;
  ll ans = f(b) ^ f(a-1);
  out(ans);
  return 0;
}
