#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;

  int cnt = 0;
  rep(i, n) {
    rep(j, n) {
      int num = k - (i+j+2);
      if (0 < num && num <= n) cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
