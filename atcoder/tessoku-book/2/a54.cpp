#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  map<string, int> s;
  int q; cin >> q;
  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      string x; cin >> x;
      int y; cin >> y;
      s[x] = y;
    } else {
      string x; cin >> x;
      cout << s[x] << endl;
    }
  }
  return 0;
}
