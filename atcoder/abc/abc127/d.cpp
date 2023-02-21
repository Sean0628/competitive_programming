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
  priority_queue<P> que;
  int n, m; cin >> n >> m;
  rep(i,n) {
    int a; cin >> a;
    que.push(make_pair(a, 1));
  }
  rep(i, m) {
    int b, c; cin >> b >> c;
    que.push(make_pair(c, b));
  }

  ll ans = 0;
  rep(i, n) {
    P p = que.top(); que.pop();
    ans += p.first;
    p.second--;

    if (p.second > 0) que.push(p);
  }

  out(ans);
  return 0;
}
