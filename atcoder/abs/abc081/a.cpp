#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i< (n); ++i)

int main() {
  int cnt = 0;
  char s[3];
  rep (i, 3) cin >> s[i];
  rep (i, 3) if (s[i] == '1') cnt++;
  cout << cnt << endl;

  return 0;
}
