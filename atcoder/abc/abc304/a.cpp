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
  vector<string> s(n);
  vector<int> a(n);
  rep(i,n) cin >> s[i] >> a[i];
  int mn = 1e9;
  rep(i,n) chmin(mn, a[i]);

  rep(i, n) {
    if (a[i] == mn) {
      rep(j, n) {
        int idx = (i + j) % n;
        out(s[idx]);
      }
    }
  }
  return 0;
}
