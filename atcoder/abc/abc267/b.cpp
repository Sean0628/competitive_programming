#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  bool sp = false;

  if (s[0] == '0') {
    vector<int> r(7, 1);

    if (s[6] == '0') r[0] = 0;
    if (s[3] == '0') r[1] = 0;
    if (s[1] == '0' && s[7] == '0') r[2] = 0;
    if (s[0] == '0' && s[4] == '0') r[3] = 0;
    if (s[2] == '0' && s[8] == '0') r[4] = 0;
    if (s[5] == '0') r[5] = 0;
    if (s[9] == '0') r[6] = 0;

    if (s[0] == '0') {
      rep(i, 7) {
        for (int j = i + 2; j < 7; ++j) {
          if (r[j] && r[i]) {
            for (int k = i+1; k < j; ++k) {
              if (r[k]) break;

              if (k == j-1) sp = true;
            }
          }
        }
      }
    }
  }

  cout << (sp ? "Yes" : "No") << endl;
  return 0;
}

