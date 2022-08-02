#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, s, d; cin >> n >> s >> d;

  bool ans = false;
  for (int i = 0; i < n; ++i) {
    ll x, y; cin >> x >> y;

    if (x < s && y > d) {
      ans = true;
    }
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
