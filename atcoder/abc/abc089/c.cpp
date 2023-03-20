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
  vector<char> l = { 'M', 'A', 'R','C', 'H' };
  int n; cin >> n;
  map<char, ll> mp;
  rep(i, n) {
    string s; cin >> s;
    rep(j, 5) {
      if (s[0] == l[j]) mp[l[j]]++;
    }
  }

  ll ans = 0;
  rep(i, 1<<5) {
    if (__builtin_popcount(i) != 3) continue;

    ll tmp = 1;
    rep(j, 5) {
      if (i>>j&1) tmp *= mp[l[j]];
    }

    ans += tmp;
  }

  out(ans);
  return 0;
}
