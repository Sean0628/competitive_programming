
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  vector<int> a(10, 0);
  cin >> s;

  rep(i, s.size()) {
    int idx = s[i] - '0';
    a[idx] = 1;
  }

  rep(i, 10) if (!a[i]) cout << i << endl;

  return 0;
}
