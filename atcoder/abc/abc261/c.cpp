#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  map<string, int> mp;

  vector<string> res(n);
  rep(i, n) {
    if (!mp[s[i]]) {
      res[i] = s[i];
    } else {
      res[i] = s[i] + "(" + to_string(mp[s[i]]) + ")";
    }

    mp[s[i]]++;
  }

  rep(i, n) cout << res[i] << endl;

  return 0;
}
