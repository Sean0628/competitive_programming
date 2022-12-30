#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;
  string ans = "No";

  if (s == t) ans = "Yes";
  rep(i, s.size()-1) {
    string tmp = s;
    swap(tmp[i], tmp[i+1]);
    if (tmp == t) ans = "Yes";
  }

  cout << ans << endl;
  return 0;
}
