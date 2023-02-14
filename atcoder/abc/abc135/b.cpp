#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "YES" : "NO") << endl; }

int main() {
  int n; cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];

  int cnt = 0;
  rep(i, n) {
    if (p[i] != i+1) cnt++;
  }

  cyn(cnt<=2);

  return 0;
}
