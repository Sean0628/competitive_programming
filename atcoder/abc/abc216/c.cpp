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
  ll n; cin >> n;

  string ans = "";

  while (n > 0) {
    if (n%2 == 0) {
      ans += "B";
      n /= 2;
    } else {
      ans += "A";
      --n;
    }
  }

  reverse(ans.begin(), ans.end());
  out(ans);
  return 0;
}
