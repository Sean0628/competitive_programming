#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;

  vector<int> v(n+1);
  rep(i, m) {
    int a, b; cin >> a >> b;
    v[a]++, v[b]++;
  }

  int mx = INT_MIN;

  for (int i = 1; i <= n; ++i) {
    mx = max(mx, v[i]);
  }

  for (int i = 1; i <= n; ++i) {
    if (v[i] == mx) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
