#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x; cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  bool ok = false;

  rep(i, n) if (a[i] == x) ok = true;

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
