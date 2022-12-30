#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;

  rep(i, s.size()) {
    if (s[i] != t[i]) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << t.size() << endl;
  return 0;
}
