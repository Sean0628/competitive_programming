#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, l; cin >> n >> l;
  vector<int> a(n);
  vector<char> b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int ans = INT_MIN;
  rep(i, n) {
    int tmp;
    if (b[i] == 'E') tmp = l - a[i];
    else tmp = a[i];

    ans = max(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}
