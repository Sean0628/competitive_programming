#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  int l = 0, r = s.size()-1;

  while (l < r && s[l] == 'a' && s[r] == 'a') {
    ++l; --r;
  }

  while (l < r && s[r] == 'a') --r;

  while (l < r && s[l] == s[r]) {
    ++l; --r;
  }

  if (l >= r) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
