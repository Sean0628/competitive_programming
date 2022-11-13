#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  string ans = "No";
  rep(i, n-2) {
    if (s[i] == 'R' && s[i+1] == 'R' && s[i+2] == 'R') ans = "Yes";
    if (s[i] == 'B' && s[i+1] == 'B' && s[i+2] == 'B') ans = "Yes";
  }

  cout << ans << endl;
  return 0;
}
