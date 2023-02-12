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
  int n; cin >> n;
  vector<double> v(n);
  rep(i, n) cin >> v[i];

  priority_queue<double, vector<double>, greater<double>> q;
  rep(i, n) q.push(v[i]);

  for (int i = 1; i < n; ++i) {
    double a = q.top(); q.pop();
    double b = q.top(); q.pop();
    double m = double (a+b)/2;
    q.push(m);
  }

  double ans = q.top(); q.pop();
  printf("%.10f\n", ans);
  return 0;
}
