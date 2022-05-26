#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<string> t = { "oxxoxxoxxo", "xxoxxoxxox", "xoxxoxxoxx"  };
  string s;
  cin >> s;

  bool v = false;
  rep(i, t.size()) {
    bool ok = true;
    rep(j, s.size()) {
      if (s[j] != t[i][j]) {
        ok = false;
        break;
      }
    }

    if (ok) {
      v = true;
      break;
    }
  }

  cout << (v ? "Yes" : "No") << endl;

  return 0;
}
