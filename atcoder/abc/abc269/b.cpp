#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<string> s(10);
  rep(i, 10) cin >> s[i];
  int a = 0, b = 0, c = 0, d = 0;

  rep(i, 10) rep(j, 10) {
    if (s[i][j] == '.') continue;
    else {
      if (a == 0) a = i+1;
      if (i+1 > b) b = i+1;
      if (c == 0) c = j+1;
      if (j+1 > d) d = j+1;
    }
  }

  cout << a << " " << b << endl;
  cout << c << " " << d << endl;
  return 0;
}
