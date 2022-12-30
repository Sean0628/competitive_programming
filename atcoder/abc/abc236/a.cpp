#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  int a, b;

  cin >> s >> a >> b;
  a -= 1; b -= 1;

  char t = s[a];
  s[a] = s[b];
  s[b] = t;

  cout << s << endl;

  return 0;
}
