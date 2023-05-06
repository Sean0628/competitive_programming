#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<double, double>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;

  int ans = 0;
  rep(i, 10000) {
    bool ok = true;
    set<int> st;

    int x = i;
    rep(j, 4) {
      int d = x%10;
      x /= 10;
      st.insert(d);
    }

    rep(j, 10) {
      if (s[j] == 'o' && !st.count(j)) ok = false;
      if (s[j] == 'x' && st.count(j)) ok = false;
    }

    if (ok) ans++;
  }

  out(ans);
  return 0;
}
