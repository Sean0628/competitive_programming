#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  rep(i, s.size()) {
    if (s[i] == '6') s[i] = '9';
    else if (s[i] == '9') s[i] = '6';
  }

  reverse(s.begin(), s.end());

  cout << s << endl;

  return 0;
}
