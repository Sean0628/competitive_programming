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
  int n, d; cin >> n >> d;
  vector<string> s(n);

  rep(i, n) cin >> s[i];
  vector<int> a(d);

  rep(i, n) rep(j, d) {
    if (s[i][j] == 'o') a[j]++;
  }

  int ans = 0, mx = 0;
  rep(i, d) {
    if (a[i] == n) {
      mx++;
      chmax(ans, mx);
    } else mx = 0;
  }

  out(ans);

  return 0;
}
