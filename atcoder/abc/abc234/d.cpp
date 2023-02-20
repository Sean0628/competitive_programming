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
  int n, k; cin >> n >> k;
  vector<int> p(n);
  rep(i, n) cin >> p[i];

  priority_queue<int, vector<int>, greater<int>> que;
  rep(i, k-1) que.push(p[i]);

  for (int i = k-1; i < n; ++i) {
    que.push(p[i]);
    while (que.size() > k) que.pop();
    out(que.top());
  }

  return 0;
}
