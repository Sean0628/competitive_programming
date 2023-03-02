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

bool check(int x) {
  set<int> st;

  while (x > 0) {
    int n = x % 10;
    st.insert(n);
    x /= 10;
  }

  return st.count(3) && st.count(5) && st.count(7);
}

int main() {
  int ans = 0;

  int n; cin >> n;
  auto dfs = [&](auto f, ll x) -> void {
    if (x <= n && check(x)) ans++;

    if (x <= (ll) 1e9) {
      f(f, 10*x+3);
      f(f, 10*x+5);
      f(f, 10*x+7);
    }
  };

  dfs(dfs, 0);

  out(ans);
  return 0;
}
