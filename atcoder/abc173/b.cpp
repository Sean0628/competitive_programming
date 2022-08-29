#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int ac = 0, wa = 0, tle = 0, re = 0;

  rep(i, n) {
    if (s[i][0] == 'A') ac++;
    if (s[i][0] == 'W') wa++;
    if (s[i][0] == 'T') tle++;
    if (s[i][0] == 'R') re++;
  }

  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
  return 0;
}
