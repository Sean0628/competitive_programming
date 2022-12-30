#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> p(26);
  rep(i, 26) cin >> p[i];

  string ans;
  rep(i, p.size()) {
    ans += 'a' + (p[i]-1);
  }

  cout << ans << endl;

  return 0;
}
