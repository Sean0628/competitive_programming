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
  int w, h; cin >> w >> h;
  int n; cin >> n;
  vector<P> p(n);
  rep(i, n) cin >> p[i].first >> p[i].second;

  sort(p.begin(), p.end());

  ll a, b; cin >> a;
  vector<int> x(a);
  rep(i, a) cin >> x[i];

  cin >> b;
  vector<int> y(b);
  rep(i, b) cin >> y[i];


  map<P, int> mp;
  rep(i, n) {
    int pos_x = lower_bound(x.begin(), x.end(), p[i].first) - x.begin();
    int pos_y = lower_bound(y.begin(), y.end(), p[i].second) - y.begin();
    mp[P(pos_x, pos_y)]++;
  }

  int mn = n;
  int mx = 0;

  for (auto p : mp) {
    chmin(mn, p.second);
    chmax(mx, p.second);
  }

  if ((a+1) * (b+1) != mp.size()) mn = 0;

  cout << mn << " " << mx << endl;

  return 0;
}

