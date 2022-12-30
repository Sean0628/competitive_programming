#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> a(5), b(5), c(5);
  int A, B; cin >> A >> B;

  for (auto i : {4, 2, 1}) {
    if (A >= i) {
      c[i] = 1;
      A -= i;
    }

    if (A == 0) break;
  }

  for (auto i : {4, 2, 1}) {
    if (B >= i) {
      c[i] = 1;
      B -= i;
    }

    if (B == 0) break;
  }

  int ans = 0;
  rep(i, 5) {
    if (c[i]) ans += i;
  }

  cout << ans << endl;
  return 0;
}
