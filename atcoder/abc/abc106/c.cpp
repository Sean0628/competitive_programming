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

const int M = 5*1e15;

int main() {
  string s; cin >> s;
  ll k; cin >> k;

  k = min(k, (ll) s.size());

  rep(i, k) {
    if (s[i] != '1') {
      out(s[i]);
      return 0;
    }
  }

  out(1);

  return 0;
}
