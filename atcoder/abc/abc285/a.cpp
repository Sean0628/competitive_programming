#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int a, b; cin >> a >> b;

  bool ok = false;
  if (2*a == b || 2*a+1 == b) ok = true;

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
