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
  int n; cin >> n;
  set<string> st;

  auto gen = [&](auto gen, string t) {
    if (t.size() == n) {
      st.insert(t);
      return;
    }

    rep(k, 3) {
      char c = 'a' + k;
      string tmp = t + c;

      gen(gen, tmp);
    }

    return;
  };

  rep(i, n) {
    rep(i, 3) {
      string t(1, 'a' + i);
      gen(gen, t);
    }
  }

  for (auto x : st) {
    out(x);
  }
  return 0;
}
