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
  vector<pair<double, int>> y;

  rep(i, 5*n) {
    double b; cin >> b;
    y.emplace_back(b, i);
  }
  vector<pair<double, int>> x = y;

  map<int, bool> mp;
  sort(x.begin(), x.end());
  rep(i, n) {
    mp[x[i].second] = true;
  }

  sort(x.rbegin(), x.rend());
  rep(i, n) {
    mp[x[i].second] = true;
  }

  double tot = 0;
  rep(i, 5*n) {
    if (mp[i] == false) tot += y[i].first;
  }

  double ans = tot/((5*n) - (2*n));
  printf("%.10f\n", ans);

  return 0;
}
