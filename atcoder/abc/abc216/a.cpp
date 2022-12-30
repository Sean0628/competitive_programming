#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  int y = s[s.size()-1] - '0';
  if (0 <= y && y <= 2) cout << s.substr(0, s.size()-2) << "-" << endl;
  if (3 <= y && y <= 6) cout << s.substr(0, s.size()-2) << endl;
  if (7 <= y && y <= 9) cout << s.substr(0, s.size()-2) << "+" << endl;

  return 0;
}
