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
  ll k; cin >> k;

  string ans; cin >> ans;
  while (k > 0) {
    ans += (k%2) * 2 + '0';
    k /= 2;
  }

  reverse(ans.begin(), ans.end());
  out(ans);
  return 0;
}
