#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int l, r; cin >> l >> r;
  string s = "atcoder";
  rep(i, s.size()) {
    if (i+1 < l || r < i+1) continue;

    cout << s[i];
  }
  return 0;
}
