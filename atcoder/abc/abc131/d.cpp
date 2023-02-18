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
  vector<P> vec(n);
  rep(i, n) {
    int a, b; cin >> a >> b;
    vec[i] = make_pair(b, a);
  }

  sort(vec.begin(), vec.end());

  ll tot = 0;
  bool ok = true;
  rep(i, n) {
    tot += vec[i].second;
    if (vec[i].first < tot) {
      ok = false;
      break;
    };
  }

  cyn(ok);
  return 0;
}
