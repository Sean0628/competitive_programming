#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> p(n), m(n+1);
  rep(i, n) cin >> p[i];

  m[0] = p[0];
  int cnt = 0;
  rep(i, n) {
    if (m[i] >= p[i]) {
      cnt++;
    }
    m[i+1] = min(m[i], p[i]);
  }

  cout << cnt << endl;
  return 0;
}
