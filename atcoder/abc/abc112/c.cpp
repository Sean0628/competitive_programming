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
  vector<int> X(n), Y(n), h(n);
  rep(i, n) cin >> X[i] >> Y[i] >> h[i];

  int MAX = 100;

  for (int y = 0; y <= MAX; y++) {
    for (int x = 0; x <= MAX; x++) {
      int needH = -1;
      rep(i, n) {
        if (h[i] > 0) {
          int tmp = h[i] + abs(y - Y[i]) + abs(x - X[i]);
          if (needH == -1) needH = tmp;
          else {
            if (needH != tmp) {
              needH = -2;
              break;
            }
          }
        }
      }

      if (needH == -2) continue;

      rep(i, n) {
        if (h[i] == 0) {
          int dist = abs(y - Y[i]) + abs(x - X[i]);
          if (needH > dist) {
            needH = -2;
            break;
          }
        }
      }

      if (needH == -2) continue;

      printf("%d %d %d", x, y, needH);
      return 0;
    }
  }

  return 0;
}
