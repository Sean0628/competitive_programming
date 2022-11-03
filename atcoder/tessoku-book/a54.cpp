#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int q; cin >> q;

  int c, y; string x;
  map<string, int> mp;
  rep(i, q) {
    cin >> c >> x;

    if (c == 1) {
      cin >> y;
      mp[x] = y;
    } else cout << mp[x] << endl;
  }
  return 0;
}
