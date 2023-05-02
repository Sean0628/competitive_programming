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
  ll n, a, b; cin >> n >> a >> b;
  ll p, q, r, s; cin >> p >> q >> r >> s;

  vector<string> ans(q-p+1, string(s-r+1, '.'));

  for (ll k = max(p-a, r-b); k <= min(q-a, s-b); ++k) ans[a+k-p][b+k-r] = '#';

  for (ll k = max(p-a, b-s); k <= min(q-a, b-r); ++k) ans[a+k-p][b-k-r] = '#';

  rep(i, q-p+1) out(ans[i]);
  return 0;
}
