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
  int n, m; cin >> n >> m;
  vector<P> vec(n);
  rep(i, n) {
    int a, b; cin >> a >> b;
    vec.emplace_back(a, b);
  }

  sort(vec.begin(), vec.end());

  ll tot = 0;
  for (auto p : vec) {
    int num = min(m, p.second);
    tot += (ll) p.first*num;

    m -= num;
    if (m == 0) break;
  }

  out(tot);
  return 0;
}
