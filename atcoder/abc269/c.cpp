#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  vector<ll> ans;
  for (ll s = n;; s = (s-1)&n) {
    ans.emplace_back(s);
    if (s == 0) break;
  }

  reverse(ans.begin(), ans.end());
  for (ll s : ans) cout << s << endl;
  return 0;
}
