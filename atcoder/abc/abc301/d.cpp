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
  string s; cin >> s;
  ll n; cin >> n;

  int sz = s.size();
  reverse(s.begin(), s.end());

  ll p = 0;
  rep(i, sz) if (s[i] == '1') p += (1LL << i);
  for (int i = sz-1; i >= 0; i--) {
    if (s[i] == '?' && p + (1LL << i) <= n) {
      p += (1LL << i);
    }
  }

  if (p > n) p = -1;
  out(p);
  return 0;
}
