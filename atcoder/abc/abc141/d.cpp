#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  priority_queue<int> q;
  rep(i, n) {
    int a; cin >> a;
    q.push(a);
  }

  rep(i, m) {
    int a = q.top(); q.pop();
    q.push(a/2);
  }

  ll ans = 0;
  rep(i, n) {
    ans += q.top(); q.pop();
  }

  out(ans);
  return 0;
}
