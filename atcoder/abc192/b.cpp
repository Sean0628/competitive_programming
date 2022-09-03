#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  bool ok = true;
  rep(i, s.size()) {
    if (i % 2 == 0) {
      if (!islower(s[i])) ok = false;
    } else {
      if (!isupper(s[i])) ok = false;
    }
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
