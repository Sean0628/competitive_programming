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
  vector<int> p(n);
  rep(i, n) cin >> p[i];

  int cnt = 0;
  rep(i, n) {
    if (i == n-1) {
      if (p[i] == i+1) {
        swap(p[i], p[i-1]);
        cnt++;
      }
    } else{
      if (p[i] == i+1) {
        swap(p[i], p[i+1]);
        cnt++;
      }
    }
  }

  out(cnt);
  return 0;
}
