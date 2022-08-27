#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  int cnt = 0, m = 0;
  rep(i, s.size()) {
    if (s[i] == 'R') {
      cnt++;
      m = max(m, cnt);
    } else cnt = 0;
  }

  cout << m << endl;
  return 0;
}
