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
  int n; cin >> n;
  string s; cin >> s;

  vector<int> a(n), b(n);

  int streak = 1;
  a[0] = 1;
  rep(i, n-1) {
    if (s[i] == 'A') streak++;
    else streak = 1;

    a[i+1] = streak;
  }

  streak = 1;
  b[n-1] = 1;
  for (int i = n-2; i >= 0; i--) {
    if (s[i] == 'B') streak++;
    else streak = 1;

    b[i] = streak;
  }

  ll ans = 0;
  rep(i, n) ans += max(a[i], b[i]);;

  out(ans);
  return 0;
}
