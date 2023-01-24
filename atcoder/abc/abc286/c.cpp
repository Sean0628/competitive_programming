#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, a, b; cin >> n >> a >> b;
  string s; cin >> s;

  ll ans = 1e18;

  rep(ai, n) {
    ll curr = (ll) a*ai;
    string t = s;
    rotate(t.begin(), t.begin()+ai, t.end());
    for (int l = 0, r = n-1; l < r; ++l, --r) {
      if (t[l] != t[r]) curr += b;
    }

    ans = min(ans, curr);
  }

  cout << ans << endl;
  return 0;
}
