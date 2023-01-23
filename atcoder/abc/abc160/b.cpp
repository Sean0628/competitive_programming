#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int x; cin >> x;
  int ans = 0;
  ans += x/500*1000;
  x%=500;

  ans += x/5*5;
  x%=5;

  cout << ans << endl;
  return 0;
}
