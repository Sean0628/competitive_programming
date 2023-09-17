#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<ll, ll>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  ll n, m; cin >> n >> m;
  vector<ll> a(m), b(m), x(m), y(m);
  vector<vector<pair<P, ll>>> to(n);
  rep(i, m) {
    cin >> a[i] >> b[i] >> x[i] >> y[i];
    a[i]--; b[i]--;
    to[a[i]].push_back({{x[i], y[i]}, b[i]});
    to[b[i]].push_back({{-1*x[i], -1*y[i]}, a[i]});
  }

  vector<P> pos(n, {0, 0});
  vector<bool> fixed(n, false);
  queue<ll> q;
  q.push(0);
  fixed[0] = true;

  while (!q.empty()) {
    ll v = q.front(); q.pop();

    for (auto p : to[v]) {
      ll x = p.first.first;
      ll y = p.first.second;
      ll u = p.second;
      if (fixed[u]) continue;

      pos[u] = {pos[v].first + x, pos[v].second + y};
      fixed[u] = true;
      q.push(u);
    }
  }

  rep(i, n) {
    if (fixed[i]) printf("%lld %lld\n", pos[i].first, pos[i].second);
    else out("undecidable");
  }
  return 0;
}
