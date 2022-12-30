#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<string> v(4);
  for (int i = 1; i < 4; ++i) cin >> v[i];
  string t; cin >> t;

  string ans = "";

  rep(i, t.size()) {
    ans += v[t[i]-'0'];
  }

  cout << ans << endl;

  return 0;
}
