#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> grundy(100'001);
  rep(i, 100'001) {
    vector<bool> t(3, false);

    if (i >= x) t[grundy[i-x]] = true;
    if (i >= y) t[grundy[i-y]] = true;

    int v = 2;
    if (!t[0]) v = 0;
    else if (!t[1]) v = 1;
    grundy[i] = v;
  }

  int sum = 0;
  rep(i, n) sum = (sum ^ grundy[a[i]]);
  string ans = "First";
  if (sum == 0) ans = "Second";

  cout << ans << endl;
  return 0;
}
