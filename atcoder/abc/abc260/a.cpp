#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  map<char, int> mp;

  rep(i, s.size()) {
    mp[s[i]]++;
  }

  for (auto p : mp) {
    if (p.second == 1) {
      cout << p.first << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
