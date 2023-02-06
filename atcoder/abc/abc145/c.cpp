#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n), a(n);
  map<int, P> mp;
  rep(i, n) {
    cin >> x[i] >> y[i];
    mp[i] = make_pair(x[i], y[i]);
  }

  rep(i, n) a[i] = i;

  double ans = 0;
  int cnt = 0;

  do {
    double tot = 0;
    rep(i, n-1) {
      double xx = (mp[a[i]].first-mp[a[i+1]].first)*(mp[a[i]].first-mp[a[i+1]].first);
      double yy = (mp[a[i]].second-mp[a[i+1]].second)*(mp[a[i]].second-mp[a[i+1]].second);
      tot += sqrt(xx+yy);
    }

    ans += tot;
    cnt++;
  } while (next_permutation(a.begin(), a.end()));

  printf("%.7f", ans/cnt);
  return 0;
}
