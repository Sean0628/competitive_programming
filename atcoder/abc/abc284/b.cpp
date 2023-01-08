#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int t; cin >> t;
  rep(i, t) {
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int cnt = 0;
    rep(i, n) {
      if (a[i] % 2 != 0) cnt++;
    }

    cout << cnt << endl;
  }
  return 0;
}
