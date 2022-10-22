#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k; cin >> n >> k;
  ll dist = n*2-2;
  string ans = "No";

  if (dist <= k) {
    if ((dist - k) % 2 == 0) ans = "Yes";
    else ans = "No";
  }

  cout << ans << endl;
  return 0;
}
