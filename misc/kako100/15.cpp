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
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  vector<int> a(n);

  iota(a.begin(), a.end(), 0);

  double sum = 0;

  auto solve = [&](int i) {
    if (i == 0) return 0.0;
    return sqrt((x[a[i]] - x[a[i-1]]) * (x[a[i]] - x[a[i-1]]) + (y[a[i]] - y[a[i-1]]) * (y[a[i]] - y[a[i-1]]));
  };
  do {
    rep(i, n) sum += solve(a[i]);
  } while (next_permutation(a.begin(), a.end()));

  int fact = 1;
  rep(i, n) fact *= i+1;

  printf("%.10f\n", sum / fact);

  return 0;
}
