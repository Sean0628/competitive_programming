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
  rep(i, n) {
    for (int j = i+1; j < n; ++j) {
      for (int k = j+1; k < n; ++k) {
        if (a[i]+a[j]+a[k] == 1000) ok = true;
      }
    }
  }

  string ans = "No";
  if (ok) ans = "Yes";
  cout << ans << endl;
  return 0;
}
