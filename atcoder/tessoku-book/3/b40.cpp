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
  vector<ll> a(n);
  vector<ll> c(101);
  rep(i, n) {
    cin >> a[i];
    a[i] %= 100;
    c[a[i]]++;
  }

  ll ans = 0;

  for (int i = 1; i < 50; i++) ans += c[i] * c[100-i];

  ans += c[0] * (c[0]-1) / 2;
  ans += c[50] * (c[50]-1) / 2;

  out(ans);
  return 0;
}
