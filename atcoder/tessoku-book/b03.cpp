#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  bool ok = false;
  rep(i, n) rep(j, i) rep(k, j) {
    if (a[i] + a[j] + a[k] == 1000) ok = true;
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
