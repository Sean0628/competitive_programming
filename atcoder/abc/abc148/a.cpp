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
  int a, b; cin >> a >> b;
  vector<bool> x(3);
  a--, b--;
  x[a] = true;
  x[b] = true;

  rep(i, 3) {
    if (!x[i]) cout << i+1 << endl;
  }
  return 0;
}
