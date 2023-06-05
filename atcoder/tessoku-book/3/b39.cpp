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
  int n, d; cin >> n >> d;
  vector<P> x(n);
  rep(i, n) {
    int a, b; cin >> a >> b;
    x[i] = P(a, -b);
  }

  sort(x.rbegin(), x.rend());

  priority_queue<int> q;

  ll ans = 0;
  rep(i, d) {
    while (x.size() && x.back().first <= i+1) {
      q.push(-x.back().second);
      x.pop_back();
    }

    if (!q.empty()) {
      ans += q.top();
      q.pop();
    }
  }

  out(ans);

  return 0;
}
