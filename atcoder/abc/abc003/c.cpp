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
  int n, k; cin >> n >> k;
  vector<double> a(n);
  rep(i, n) cin >> a[i];

  double ans = 0;

  sort(a.rbegin(), a.rend());

  vector<double> b;
  rep(i, k) b.push_back(a[i]);

  sort(b.begin(), b.end());

  rep(i, k) {
    ans = (b[i]+ans) / 2;
  }

  printf("%.10f\n", ans);
  return 0;
}
