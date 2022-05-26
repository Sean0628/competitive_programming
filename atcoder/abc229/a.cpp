#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s1, s2, ans = "Yes";
  cin >> s1 >> s2;

  if ((s1[0] == '.' && s2[1] == '.')
      || (s1[1] == '.' && s2[0] == '.')) {
    ans = "No";
  }

  cout << ans << endl;

  return 0;
}
