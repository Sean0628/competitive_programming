#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<string> c = { "ABC" , "ARC", "AGC", "AHC" };
  vector<string> s(3);
  vector<int> ans(4, 0);

  rep(i, 3) cin >> s[i];

  rep(i, c.size()) {
    rep(j, s.size()) {
      if (c[i] == s[j]) ans[i] = 1;
    }
  }

  rep(i, ans.size()) {
    if (!ans[i]) cout << c[i] << endl;
  }

  return 0;
}
