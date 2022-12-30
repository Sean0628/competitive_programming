#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t;
  cin >> s >> t;

  int k = (t[0] - s[0] + 26) % 26;
  string s2 = s;
  rep(i, s.size()) {
    s2[i] = ((s2[i] - 'a') + k) % 26 + 'a';
  }

  if (s2 == t) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
