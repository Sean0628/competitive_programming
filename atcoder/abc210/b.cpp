#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  string ans;
  rep(i, s.size()) {
    if (s[i] == '1') {
      ans = (i%2 == 0) ? "Takahashi" : "Aoki";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
