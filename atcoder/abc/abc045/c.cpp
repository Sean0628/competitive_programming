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
  string s; cin >> s;
  int n = s.size();

  auto eval = [&](string t) {
    ll res = 0;
    int n = t.size();
    string d = "";
    rep(i, n) {
      if (t[i] == '+') {
        res += stoll(d);
        d = "";
      } else {
        d += t[i];
      }
    }

    if (d != "") res += stoll(d);
    return res;
  };

  ll ans = 0;
  rep(i, 1<<(n-1)) {
    string t; t += s[0];
    rep(j, n-1) {
      if (i & (1<<j)) t += '+';
      t += s[j+1];
    }

    ans += eval(t);
  }

  out(ans);
  return 0;
}
