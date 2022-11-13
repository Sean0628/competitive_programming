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
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int v = k - (i + j);
      if (1 <= v && v <= n) cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
