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
  int m; cin >> m;
  vector<int> d(m);
  rep(i, m) cin >> d[i];

  int mid = 0;
  rep(i, m) mid += d[i];
  mid++;
  mid /= 2;

  int tot = 0;
  rep(i, m) {
    tot += d[i];
    if (tot >= mid) {
      int month = i+1;
      int day = mid - (tot - d[i]);

      printf("%d %d\n", month, day);
      return 0;
    }
  }
  return 0;
}
