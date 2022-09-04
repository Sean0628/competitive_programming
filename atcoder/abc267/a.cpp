#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  if (s == "Monday") cout << 5 << endl;
  else if (s == "Tuesday") cout << 4 << endl;
  else if (s == "Wednesday") cout << 3 << endl;
  else if (s == "Thursday") cout << 2 << endl;
  else if (s == "Friday") cout << 1 << endl;
  return 0;
}
