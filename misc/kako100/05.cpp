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

const int MAX = 2*1e5+1;

int main() {
  int a, b, c, x, y; cin >> a >> b >> c >> x >> y;

  int ans = a*x + b*y;

  rep(i, MAX) {
    if (i%2 == 1) continue;

    int sum = i*c;
    sum += max(0, x - i/2) * a;
    sum += max(0, y - i/2) * b;
    chmin(ans, sum);
  }

  out(ans);

  return 0;
}
