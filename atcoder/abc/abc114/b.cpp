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
  int ans = INT_MAX;
  auto f = [&](int i) {
    int res = 0;

    for (int j = i; j < i+3; ++j) {
      res *= 10;
      res += s[j] - '0';
    }

    return res;
  };

  rep(i, n-2) {
    int x = f(i);
    ans = min(abs(x-753), ans);
  }

  out(ans);
  return 0;
}
