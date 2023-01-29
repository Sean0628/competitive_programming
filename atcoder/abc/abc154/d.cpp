#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, k; cin >> n >> k;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  rep(i, n) p[i]++;

  int mx = 0;
  int s = 0;
  queue<int> q;
  rep(i, n) {
    s += p[i];
    q.push(p[i]);
    if (q.size() > k) {
      s -= q.front(); q.pop();
    }

    if (q.size() == k) {
      chmax(mx, s);
    }
  }

  double ans = mx;
  ans /= 2;

  printf("%.10f\n", ans);

  return 0;
}
