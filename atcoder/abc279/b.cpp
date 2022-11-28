#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;

  bool ok = false;
  if (s.size() >= t.size()) {
    rep(i, s.size()) {
      int cnt = 0;
      rep(j, t.size()) {
        if (s[i+j] != t[j]) break;
        cnt++;
      }
      if (cnt == t.size()) ok = true;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
